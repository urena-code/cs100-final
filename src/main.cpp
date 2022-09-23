#include <iostream>
#include "../header/todoList.h"
#include "../header/todoTask.h"
#include "../header/ListContainer.h"

#include <vector>
#include <string.h> 

using namespace std;

void printMenu(ListContainer* container1)
{
    string userinput = " ";
    while(!(userinput == "q"))
    {
        cout<<

        "=========================================="<< endl <<
        "||          enter an option!             ||" << endl << 
        "||     1 - make a new todo list          ||"  << endl <<
        "|| 2 - add a task to an existing todolist||" << endl <<  
        "||            3 - display all            ||"<< endl << 
        "||    4 - mark an item as complete       ||" << endl<<
        "||   5 - delete all complete items       ||"<< endl << 
        "||           6 - edit list name          ||"<< endl <<
        "||         7 - edit a task               ||"<< endl <<
        "||            q - quit                   ||"<< endl <<
        "===========================================" << endl ;

        
        getline(cin, userinput);
        if(userinput == "1")
        {
            container1->addNewToDoList();
        }else if(userinput == "2")
        {
            container1->addTaskToExisting();
        }
        else if(userinput == "3")
        {
            container1->printAll();
        }
        else if(userinput == "4")
        {
            container1->searchAndMarkComplete();
        }
        else if(userinput == "5")
        {
            container1->deleteCompletedItems();
        }else if(userinput == "6"){
        container1->editListName();
        }
        else if(userinput == "7")
        {
            container1->editTaskInList();
        }
        else if(userinput=="q") 
        {
            cout << "goodbye!"<<endl;
        }
        else{
            cout << "invalid entry " << endl; 
        }
        //cin.ignore();

    }
}

int main(){

ListContainer* container1 = new ListContainer();

printMenu(container1); 

    return 0; 
}








