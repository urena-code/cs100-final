#include "gtest/gtest.h"
#include "../header/todoTask.h"
#include "../src/todoTask.cpp"

TEST(todoTaskTester, nameTester){
todoTask* test1 = new todoTask();
test1->setTaskName("wow");

 //setTaskName(string );
 //setPriority(int );
 //setDuration(int );
 //setTaskNumber(int );
 EXPECT_EQ("wow", test1->getTaskName());
 delete test1;
}

TEST(todoTaskTester, setPriorityTest){
todoTask* test1 = new todoTask();
test1->setPriority(10);

EXPECT_EQ(10, test1->getPriority());
delete test1;
}


TEST(todoTaskTester, setDurationTest){
todoTask* test1 = new todoTask();
test1->setDuration(1);

EXPECT_EQ(1, test1->getDuration());
delete test1;
}


//task num 
TEST(todoTaskTester, setTaskNumTest){
todoTask* test1 = new todoTask();
test1->setTaskNumber(0);


EXPECT_EQ(0, test1->getDuration());
delete test1;
}

TEST(todoTaskTester, OKStrings){
todoTask* test1 = new todoTask();

EXPECT_TRUE(test1->validdateString("THIS SHOULD WORK!"));
EXPECT_TRUE(test1->validdateString("25334hjkah k hkj kk"));
delete test1;
}

TEST(todoTaskTester, spaces){
todoTask* test1 = new todoTask();

EXPECT_FALSE(test1->validdateString("    "));
EXPECT_FALSE(test1->validdateString("  this either  "));
EXPECT_FALSE(test1->validdateString(""));

delete test1;
}
TEST(todoTaskTester, specialcaseStringValidation){
todoTask* test1 = new todoTask();
  EXPECT_FALSE(test1->validdateString(" "));
  delete test1;
}


int main() {//int argc, char**argv
  ::testing::InitGoogleTest();//&argc, argv
  return RUN_ALL_TESTS();
}
