#ifndef STACK_V_H_
#define STACK_V_H_

#include <string>
#include <vector>

class StackV {
  public:
    StackV();
    ~StackV();

    void Push(std::string const push_me);
    std::string Pop();
    std::string Peek();
    int Size();
    bool IsEmpty();

  private:
    std::vector<std::string> contents_;
};

void StackV_main();

#endif