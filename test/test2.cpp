
#include "gtest/gtest.h"
#include "../header/todoTask.h"
#include "../src/todoTask.cpp"
#include "../header/todoList.h"
#include "../src/todoList.cpp"



int main() {//int argc, char**argv
  ::testing::InitGoogleTest();//&argc, argv
  return RUN_ALL_TESTS();
}