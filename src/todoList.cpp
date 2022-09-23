#include <iostream>
#include <vector>
#include "../header/todoTask.h"
#include "../header/todoList.h"
bool validdateString(string inputStr){
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



todoList::todoList(){
    inputNameOfList();
}

void todoList::add_to_list(){
    
}

void todoList::addTask(){
    listOfTasks.push_back(new todoTask());  
}


void todoList::deleteList(){
    for(int i = 0; i < listOfTasks.size() ; ++i){
    delete listOfTasks.at(i);
    }
}

string todoList::getName(){
    return nameOfList; 
}

void todoList::setName(string name) {
    nameOfList = name;
}


 void todoList::inputNameOfList(){
        cout<<"enter name of new list"<<endl;
        string inputNameOfNewList;

        getline(cin, inputNameOfNewList);

        while(!validdateString(inputNameOfNewList)){
        cout<<"enter name of new task:"<<endl;
        getline(cin, inputNameOfNewList);
        }
        nameOfList = inputNameOfNewList;

}



void todoList::editTask(){
    cout<<"enter the number of the task you want to edit: ";
    int taskNumber;

    cin>>taskNumber;

    taskNumber--;

    while(taskNumber < 0 || taskNumber > listOfTasks.size()){
        
        cout << "error! not valid entry. "<<endl;

        cin.clear();
        cin.ignore();
        
        cin>>taskNumber; 
    }
    
    cin.ignore();

    NewTitle(taskNumber);
    NewPriority(taskNumber);
    NewDueDate(taskNumber);

}


void todoList::NewTitle(int taskNumber) {
    string inputTask;
    cout << "enter the new name of of your task or press enter to make no changes:" << endl;
    getline(cin, inputTask);

    if (inputTask.empty())
        return;

    listOfTasks.at(taskNumber)->setTaskName(inputTask);
}

void todoList::NewPriority(int taskNumber){
    int inputPriority;

    cout<< "enter the new priority (1-10) or enter -1 to make no changes" <<endl;   
    cin >> inputPriority;

    if (inputPriority == -1)
        return;

    while(!((inputPriority>0) && (inputPriority<11))){
        cout<<"invalid entry"<<endl;
        cout<<"enter the priority (1-10)"<<endl;

        cin.clear();
        cin.ignore();

        cin >> inputPriority;
    }
    listOfTasks.at(taskNumber)->setPriority(inputPriority);
}


void todoList::NewDueDate(int taskNumber){
    int daysUntilDue;

    cout<<"enter the number of days you have to complete the task or enter -1 to make no changes"<<endl;   
    cin >> daysUntilDue;

    if (daysUntilDue == -1)
        return;

    while(!((daysUntilDue>=0) && (daysUntilDue<=365))){
        cout<<"invalid entry"<<endl;
        cout<<"how many days do you have to complete the task? (0-365)"<<endl;

        cin.clear();
        cin.ignore();

        cin >> daysUntilDue;
    }
    listOfTasks.at(taskNumber)->setDuration(daysUntilDue);

}


void todoList::printAllTasksInList(){
        for (int i = 0 ; i < listOfTasks.size();++i){
                if(listOfTasks.at(i)->getComplete()){
                    cout<< " X " ;
                }else {
                    cout << "○" ; 
                }


            cout << " - "<< listOfTasks.at(i)->getTaskName()<<endl;
            cout << "     priority: "<<listOfTasks.at(i)->getPriority()<<endl;
            cout << "     days until due: "<<listOfTasks.at(i)->getDuration()<<endl; 
        
        }

        if(listOfTasks.empty()){
        cout<< " THERE ARE NO TASKS IN THE LIST" << endl; 
    }
}

bool todoList::searchAndMarkComplete(string inputSearch){
    for (int i = 0 ; i < listOfTasks.size(); ++i){
        if(listOfTasks.at(i)->getTaskName() == inputSearch){
            listOfTasks.at(i)->setComplete(true);
            return true;
        }
    }
    return false;
}

void todoList::deleteCompletedTasksinList(){
    for (int i = 0 ; i < listOfTasks.size(); ++i){
        if(listOfTasks.at(i)->getComplete()){
            delete listOfTasks.at(i);
            listOfTasks.erase(listOfTasks.begin()+i);
            --i;
        }
    }
}
//

