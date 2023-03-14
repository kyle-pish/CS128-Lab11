//Josh Reed; Kyle Pish
//3/31/2022

#include "queue_v.h"
#include <iostream>

//Obligatory constructor & destructor
QueueV::QueueV() {
}

QueueV::~QueueV() {
}

//Takes as input an std::string and adds it to the back of the queue
void QueueV::Enqueue(std::string const push_me) {
  this->contents_.push_back(push_me);
}

//Returns and removes the element at the front of the queue
std::string QueueV::Dequeue() {
  std::string output = this->contents_.front(); //Necessary, as std::vector's pop functions do not return the removed element, but ours must
  this->contents_.erase(this->contents_.begin());
  return output;
}

//Returns, but does not remove, the element at the front of the queue
std::string QueueV::Peek() {
  return this->contents_.front();
}

//Returns the size of the queue as an int
int QueueV::Size() {
  return this->contents_.size();
}

//Returns true if the queue is empty; false otherwise
bool QueueV::IsEmpty() {
  return this->contents_.empty();
}

void QueueV_main() {
  //Should output (separated by endls) 0, 1, 3, 0, Red, Green, Blue, Orange
  
  QueueV testqueue;

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