#ifndef ListContainer_h
#define ListContainer_h

#include <iostream>
#include <vector>


#include "../header/todoList.h"

class ListContainer{

public: 
ListContainer();
~ListContainer();
void addNewToDoList();
//void deleteListContainer();
void addTaskToExisting();
void displayAllLists();
void printAll();

void editTaskInList();
void editListName();
void searchAndMarkComplete();
void deleteCompletedItems();


//void printAllTaskInfo();

private:
vector<todoList*>todoListofList;
bool validdateString(string);
};

#endif