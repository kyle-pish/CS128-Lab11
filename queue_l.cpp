//Josh Reed; Kyle Pish
//3/31/2022

#include "queue_l.h"
#include <iostream>

//Obligatory constructor & destructor
QueueL::QueueL() {
}

QueueL::~QueueL() {
}

//Takes as input an std::string and adds it to the back of the queue
void QueueL::Enqueue(std::string const push_me) {
  this->contents_.push_back(push_me);
}

//Returns and removes the element at the front of the queue
std::string QueueL::Dequeue() {
  std::string output = this->contents_.front(); //Necessary, as std::list's pop functions do not return the removed element, but ours must
  this->contents_.pop_front();
  return output;
}

//Returns, but does not remove, the elemtn at the front of the queue
std::string QueueL::Peek() {
  return this->contents_.front();
}

//Returns the size of the queue as an int
int QueueL::Size() {
  return this->contents_.size();
}

//Returns true if the queue is empty; false otherwise
bool QueueL::IsEmpty() {
  return this->contents_.empty();
}

void QueueL_main() {
  //Should output (separated by endls) 0, 1, 3, 0, Red, Green, Blue, Orange
  
  QueueL testqueue;

  std::cout << testqueue.Size() << std::endl;
  std::cout << testqueue.IsEmpty() << std::endl;
  testqueue.Enqueue("Red");
  testqueue.Enqueue("Green");
  testqueue.Enqueue("Blue");
  std::cout << testqueue.Size() << std::endl;
  std::cout << testqueue.IsEmpty() << std::endl;
  std::cout << testqueue.Dequeue() << std::endl;
  std::cout << testqueue.Dequeue() << std::endl;
  testqueue.Enqueue("Orange");
  std::cout << testqueue.Dequeue() << std::endl;
  std::cout << testqueue.Dequeue() << std::endl;
  
}