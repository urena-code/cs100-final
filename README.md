# Todo List! 


 > Authors: [Luis Urena](https://github.com/urena-code)
            [Julian Giessinger](https://github.com/20000010)


## Phase I
Our todo List is important as students to keep ourselves organized and focused. 
It is to be used to make sure to stick to things that we need to do, and trim out any distractions.

This project is important to me because one of the best skills to learn is good time management. Often times these skills are taught in general education. It is left up to each individual to go the extra step to improve their time management skills. A task scheduler is a great tool that can be used to help an individual complete all their tasks for the day and as a result improve their time management skills. we plan on implementing this task scheduler using C++ and possibly swift. The inputs and outputs of the projects are all just on the user that logged in: 

 
 Tools
 
 [CMake](http://cmake.org/)
 [Lucid](lucid.app)
 [googletest](https://github.com/google/googletest)
 
This input to the project will allow to take certain actions including:
Each time that the users wants to edit a task, they need to input which task they want to edit, then input which category they want to edit. 
Each time that a user wants to remove a task, the user needs to input the task to be removed. 
Each time that a user wants to mark a subtask as complete, they need to input which of the tasks they want to mark complete. 
Every time that a user want to mark a Task as complete, they need to input which task and the computer should output the task and subtasks complete. 
Each time that a user wants to input a new task, they will need to input the title, priority, duration and due date.

The output will be the entire list. 
Another output will be if they task was added successfully. 


## Class Diagram

<img width="911" alt="Screen Shot 2022-07-13 at 9 07 18 PM" src="https://user-images.githubusercontent.com/59552176/178896339-b55797b7-4548-4993-a53e-0c7ffea68a98.png">

main starts off with a vector. this vector contain a list of pointers to lists. Each list has a list of tasks. This will allow you to create seperate lists  for your groceries, or for homework!

 > ## Phase II


 We used a top down approach. We did this because we wanted to have a secure outline before the features. This was so that we could work on different aspects of the projects at the same time, and then merge together. This allowed us to make sure we used the same naming for our different classes. We relies much on the UML diagram to implement the rest of the features. 
 
 <img width="717" alt="Screen Shot 2022-07-14 at 10 20 27 PM" src="https://user-images.githubusercontent.com/59552176/179156042-e3df1f72-a844-4a98-9517-16c4b75586e8.png">

 
 > ##Phase III
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 
 Before you add tasks to your to-do list, you need to first make a list! do this by entering 1. (then display using 3) 
 <img width="329" alt="Screen Shot 2022-07-22 at 3 06 06 PM" src="https://user-images.githubusercontent.com/59552176/180574794-7fed686e-7b3b-4707-947f-b745196f5a1b.png">

now lets add "eggs" to our shopping list! (enter 2, select which list to add to - enter 1 - and enter relevant features.)

<img width="392" alt="Screen Shot 2022-07-22 at 3 08 31 PM" src="https://user-images.githubusercontent.com/59552176/180574928-052a43ff-a873-49c3-a2ed-5516b4ac6bfa.png">

(Feel free to display to verify) 

To mark things complete, select "4" and you will be prompted to type the name of the task you would like to mark complete.

<img width="319" alt="Screen Shot 2022-07-22 at 3 10 34 PM" src="https://user-images.githubusercontent.com/59552176/180575075-0ee6e570-6b2f-4e50-a27c-89287fb14ae3.png">
<img width="240" alt="Screen Shot 2022-07-22 at 3 10 49 PM" src="https://user-images.githubusercontent.com/59552176/180575121-48bdaf94-5274-497a-adb5-a64644b7566e.png">

<img width="245" alt="Screen Shot 2022-07-22 at 3 13 51 PM" src="https://user-images.githubusercontent.com/59552176/180575464-3f51bf96-822c-4a39-b45b-1d20ae289da9.png">

 After adding items to the list and marking them complete, you can remove them using option "5" 
 AFTER: 
 <img width="247" alt="Screen Shot 2022-07-22 at 3 15 08 PM" src="https://user-images.githubusercontent.com/59552176/180575489-192a93f8-898e-4991-b804-133f3189f335.png">

 

 ## Testing
We used googletest to test the functionality of the tasks. 

<img width="454" alt="Screen Shot 2022-07-22 at 3 15 40 PM" src="https://user-images.githubusercontent.com/59552176/180575585-596a2017-0719-48c3-92e4-c357cf00e696.png">


## How To execute: 
 1) in the main directory, run ` cmake . ` (cmake must be preinstalled) 
 2) run ` make `
 3) run ` ./todolist `
 
 ## How To run tests:
 1) in the test directory , run ` git clone https://github.com/google/googletest.git` 
 2) run ` cmake . `
 3) run ` make `
 4) run ` ./test `

 
 
