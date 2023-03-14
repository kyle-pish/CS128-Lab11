#ifndef STACK_L_H_
#define STACK_L_H_

#include <string>
#include <list>

class StackL {
  public:
    StackL();
    ~StackL();

    void Push(std::string const push_me);
    std::string Pop();
    std::string Peek();
    int Size();
    bool IsEmpty();

  private:
    std::list<std::string> contents_;
};

void StackL_main();

#endif