#ifndef QUEUE_L_H_
#define QUEUE_L_H_

#include <string>
#include <list>

class QueueL {

  public:
    QueueL();
    ~QueueL();

    void Enqueue(std::string const push_me);
    std::string Dequeue();
    std::string Peek();
    int Size();
    bool IsEmpty();

  private:
    std::list<std::string> contents_;

};

void QueueL_main();

#endif