//Josh Reed; Kyle Pish
//3/31/2022

#include "stack_v.h"
#include <iostream>

//Obligatory Constructor & Destructor
StackV::StackV() {
};

StackV::~StackV() {
};

//Takes an std::string as input and adds it to the top of the stack
void StackV::Push(std::string const push_me) {
  this->contents_.push_back(push_me);
}

//Returns and removes the element at the top of the stack
std::string StackV::Pop() {
  std::string output = this->contents_.back(); //Necessary, as std::vector's pop functions do not return the removed element, but ours must
  this->contents_.pop_back();
  return output;
}

//Returns, but does not remove, the element at the top of the stack.
std::string StackV::Peek() {
  return contents_.back();
}

//Returns the size of the stack as an int
int StackV::Size() {
  return this->contents_.size();
}

//Returns true if the stack is empty; false otherwise
bool StackV::IsEmpty() {
  return this->contents_.empty();
}

void StackV_main() {
  StackV test_stack;

  //Should print out (with endlines between) 1, 0, 3, Blue, Green, Orange, Red, 0
  std::cout << test_stack.IsEmpty() << std::endl;
  test_stack.Push("Red");
  test_stack.Push("Green");
  test_stack.Push("Blue");
  std::cout << test_stack.IsEmpty() << std::endl;
  std::cout << test_stack.Size() << std::endl;
  std::cout << test_stack.Pop() << std::endl;
  std::cout << test_stack.Pop() << std::endl;
  test_stack.Push("Orange");
  std::cout << test_stack.Pop() << std::endl;
  std::cout << test_stack.Pop() << std::endl;
  std::cout << test_stack.Size() << std::endl;
}
