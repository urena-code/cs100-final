#include "../header/todoTask.h"


todoTask::todoTask(bool x){

    cout << endl << "-----------" <<endl;
    inputandValidateNameOfTask();     
    inputandValidatepriority();
    inputandValidateDueDate(); 
    cout<< "-----------" <<endl << "NEW TASK added"<< endl << "-----------" <<endl;

    isComplete = false;
    taskNumber = 0;

}


todoTask::todoTask(){

isComplete = false;
 taskName = " ";
 priority=0;
 duration=0;
 taskNumber=0;

}



void todoTask::inputandValidateNameOfTask(){
    string inputTask;

    cout<<"enter name of new task:"<<endl;
    getline(cin, inputTask);

    while(!validdateString(inputTask)){
        cout<<"enter name of new task:"<<endl;
        getline(cin, inputTask);
    }
    taskName=inputTask;

}

void todoTask::inputandValidatepriority(){
    int inputPriority;

    cout<<"enter the priority (1-10)"<<endl;   
    cin >> inputPriority;

  while(!inputPriority || inputPriority < 1 || inputPriority > 10){
            
            cout << "ERROR! not valid entry. "<<endl<<endl;
            cin.clear();
            cin.ignore(100,'\n'); 
           
            cout<<"enter the priority (1-10)"<<endl;  
            cin>>inputPriority; 
        }

    priority = inputPriority;
}

void todoTask::inputandValidateDueDate(){
    int daysUntilDue;

    cout<<"how many days do you have to complete the task? (1-365)"<<endl;   
    cin >> daysUntilDue;

     while(!daysUntilDue || daysUntilDue < 1 || daysUntilDue > 365){
            
            cout << "ERROR! not valid entry. "<<endl<<endl;
            cin.clear();
            cin.ignore(100,'\n'); 
           
            cout<<"how many days do you have to complete the task? (0-365)"<<endl; 
            cin>>daysUntilDue; 
        }


    duration=daysUntilDue;
    cin.clear();
    cin.ignore(100,'\n'); //testing
}

string todoTask::getTaskName(){
    return taskName;
}
int todoTask::getPriority(){
    return priority;
}

int todoTask::getDuration(){
    return duration; 
}

int todoTask::getTaskNumber(){
    return taskNumber; 
}

void todoTask::setTaskName(string inputTaskName) {
    taskName = inputTaskName;
}

void todoTask::setPriority(int inputPriority) {
    priority = inputPriority;
}

void todoTask::setDuration(int inputDuration) {
    duration = inputDuration;
}

void todoTask::setTaskNumber(int inputTaskNum) {
    taskNumber = inputTaskNum;
}

bool todoTask::getComplete(){
    return isComplete; 
}

bool todoTask::validdateString(string inputStr){
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

void todoTask::setComplete(bool isCompleteBoolean){
    if(isCompleteBoolean)
    {
        isComplete=true;
    }

}
