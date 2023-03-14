//Josh Reed; Kyle Pish
//3/31/2022

#include "stack_l.h"
#include <iostream>

//Obligatory Constructor & Destructor
StackL::StackL() {
};

StackL::~StackL() {
};

//Takes an std::string as input and adds it to the top of the stack
void StackL::Push(std::string const push_me) {
  this->contents_.push_front(push_me);
}

//Returns and removes the element at the top of the stack
std::string StackL::Pop() {
  std::string output = this->contents_.front(); //Necessary, as std::list's pop functions do not return the removed element, but ours must
  this->contents_.pop_front();
  return output;
}

//Returns, but does not remove, the element at the top of the stack
std::string StackL::Peek() {
  return contents_.front();
}

//Returns the size of the stack as an int
int StackL::Size() {
  return this->contents_.size();
}

//Returns true if the stack is empty; false otherwise
bool StackL::IsEmpty() {
  return this->contents_.empty();
}

void StackL_main() {
  StackL test_stack;

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
