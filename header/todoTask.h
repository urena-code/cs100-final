#ifndef todoTask_h
#define todoTask_h

#include <iostream>

using namespace std;

const int TITLE_LENGTH = 20;

class todoTask{
public:
int listNumber;

todoTask();
string getTaskName();
int getPriority();
int getDuration();

int getTaskNumber();

void setTaskName(string );
void setPriority(int );
void setDuration(int );
void setTaskNumber(int );

void setComplete(bool);
bool getComplete();


private: 
void inputandValidatepriority();
void inputandValidateNameOfTask();
void inputandValidateDueDate(); 
bool validdateString(string);


bool isComplete;
string taskName;
int priority;
int duration;
int taskNumber;

};

#endif