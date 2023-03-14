#ifndef QUEUE_V_H_
#define QUEUE_V_H_

#include <string>
#include <vector>

class QueueV {

  public:
    QueueV();
    ~QueueV();

    void Enqueue(std::string const push_me);
    std::string Dequeue();
    std::string Peek();
    int Size();
    bool IsEmpty();

  private:
    std::vector<std::string> contents_;

};

void QueueV_main();

#endif