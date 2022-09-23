#ifndef TODOLIST_H
#define TODOLIST_H

#include <iostream>
#include <vector>


#include "../header/todoTask.h"

class todoList{

public: 

    todoList();
    void add_to_list();
    void addTask();
    void deleteList();
    string getName();
    void setName(string );
    void printAllTasksInList();

    void editTask();
    void NewTitle(int );
    void NewPriority(int );
    void NewDueDate(int );

    bool searchAndMarkComplete(string inputSearch);
    void deleteCompletedTasksinList();




    //void display();

private: 
    string nameOfList;
    vector<todoTask*> listOfTasks;
    void inputNameOfList();

};

#endif