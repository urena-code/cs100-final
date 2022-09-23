#include "../header/ListContainer.h"

ListContainer::ListContainer(){

}

void ListContainer::addNewToDoList(){
    todoListofList.push_back(new todoList());
}

ListContainer::~ListContainer(){
    for(int i = 0; i < todoListofList.size() ; ++i)
    {
        todoListofList.at(i)->deleteList();
    }
}

void ListContainer::addTaskToExisting(){
    if(todoListofList.empty()){
        cout<<"error! Create a To-Do List before adding a Task"<<endl;
    }else{

        cout<<"enter number of the list: "<<endl;
        displayAllLists();
        int indexOfList;
        cin>>indexOfList;


        while(!indexOfList || indexOfList < 1 || indexOfList > todoListofList.size()){
            
            cout << "ERROR! not valid entry. "<<endl<<endl;
            cin.clear();
            cin.ignore(100,'\n'); 
           
            cout<<"To which list would you like to add to?"<<endl;
            displayAllLists();
            cin>>indexOfList; 

        }

        // cout <<"LIST NUM " << indexOfList ;
        indexOfList--;

        cin.clear();
        cin.ignore(123,'\n');
        cout << endl; 

        todoListofList.at(indexOfList)->addTask();

    }
    

}

void ListContainer::displayAllLists(){  

    for(int i = 0; i < todoListofList.size();++i){
        cout<<(i+1)<< ". " << todoListofList.at(i)->getName()<< endl;
    }

}

void ListContainer::editTaskInList(){
    if(todoListofList.empty()){
        cout<<"error! Create a To-Do List before editing a Task"<<endl;
    }
    else{
        printAll();

        cout<<"enter number of the list: ";
        int indexOfList;

        cin>>indexOfList;
        
        indexOfList--;

        while(indexOfList < 0 || indexOfList > todoListofList.size()){
            
            cout << "error! not valid entry. "<<endl;

            cin.clear();
            cin.ignore();
            
            cin>>indexOfList; 
        }

        cin.ignore();

        todoListofList.at(indexOfList)->editTask();

    }
    

}


void ListContainer::editListName(){
    if(todoListofList.empty()){
        cout<<"error! Create a To-Do List before editing a Task"<<endl;
    }
    else{
        printAll();

        cout<<"enter number of the list you want to change: ";
        int indexOfList;

        cin>>indexOfList;
        
        indexOfList--;

        while(indexOfList < 0 || indexOfList > todoListofList.size()){
            
            cout << "error! not valid entry. "<<endl;

            cin.clear();
            cin.ignore();
            
            cin>>indexOfList; 
            indexOfList--;
        }

        cin.ignore();

        string name;

        cout << "Enter the new name for your list or press enter to make no changes" << endl;

        getline(cin,name);

        if (name.empty())
            return;

        todoListofList.at(indexOfList)->setName(name);

    }
}


void ListContainer::printAll(){

    

    for(int i = 0; i<todoListofList.size(); ++i)
    {

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << (i + 1) << ". " << todoListofList.at(i)->getName() << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        todoListofList.at(i)->printAllTasksInList();

    }


    if(todoListofList.empty()){
        cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << 
        " YOU HAVE NO LISTS " << endl <<
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

    }


}

void ListContainer::searchAndMarkComplete(){

    if(todoListofList.empty()){
        cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << 
        " YOU HAVE NO LISTS " << endl <<
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        return;
    }

cout << "which task do you want to mark complete ? "<<endl;
string inputStringComplete;

printAll();

getline(cin, inputStringComplete);

while(!validdateString(inputStringComplete)){
        cout <<"error invalid entry" <<endl ; 
        cout << "which task do you want to mark complete ? "<<endl;
        getline(cin, inputStringComplete);
 }

for(int i = 0; i < todoListofList.size();++i){
    if(todoListofList.at(i)->searchAndMarkComplete(inputStringComplete) == true){
        return;
    }
}
cout << " no " << inputStringComplete << " was found. "<< endl; 


}

bool ListContainer::validdateString(string inputStr){
    //cout <<"START "<< inputStr.at(0) <<" END  " <<"==" << *(--inputStr.end()) <<"==" << endl;//debug info

    // no enters or blanks begin/ends allowed
    if(inputStr == "" ){
        cout <<"error: expecting a non blank input"  << endl; 
        return false;
    } 
    else if(inputStr.at(0)== 32 || *(--inputStr.end()) == 32 ){

            cout << "error: cannot end or start with a space."<<endl; 
        return false;
    }
    else{
    return true;
    }
}

void ListContainer::deleteCompletedItems(){
if(todoListofList.empty()){
        cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << 
        " YOU HAVE NO LISTS " << endl <<
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        return;
    }
    for (int i  = 0; i < todoListofList.size(); ++i){
        todoListofList.at(i)->deleteCompletedTasksinList();
    }

}