//Josh Reed; Kyle Pish
//3/31/2022
#include <vector>
#include <iostream>
#include <list>
#include "stack_v.h"
#include "queue_v.h"
#include "stack_l.h"
#include "queue_l.h"
#include "lab11_part2.h"

//Testing container iteration methods for vectors & lists
void ContainerTests() {
  std::vector<int> vector_1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (int i = 0; i < 10; i++) {
    std::cout << vector_1[i] << " ";
  }

  std::cout << "\n"; //Did not want to use endls in the loops so values would be on the same line; so we're using newlines in between the loops for readability
  
  for (int i: vector_1) {
    std::cout << i << " ";
  }

  std::cout << "\n";
  
  std::list<double> list_1 = {0.2, 0.4, 0.6, 0.8, 1.0};

  for (std::list<double>::iterator it = list_1.begin(); it != list_1.end(); it++) {
    std::cout << *it << " ";
  }

  std::cout << "\n"; 

  for (double i: list_1) {
    std::cout << i << " ";
  }

  std::cout << "\n"; 
  int& v_front_test_1 = vector_1.front();
  int v_front_test_2 = vector_1.front();

  std::cout << v_front_test_1 << std::endl;
  std::cout << v_front_test_2 << std::endl;

  vector_1.erase(vector_1.begin());

  std::cout << v_front_test_1 << std::endl;
  std::cout << v_front_test_2 << std::endl;

  double& l_front_test_1 = list_1.front();
  double l_front_test_2 = list_1.front();

  std::cout << l_front_test_1 << std::endl;
  std::cout << l_front_test_2 << std::endl;

  list_1.pop_front();

  std::cout << l_front_test_1 << std::endl;
  std::cout << l_front_test_2 << std::endl;

  //Assuming std::list is implemented similarly to in our own experiments, we can assume
  //that pop_front is not removing or overwriting the data stored at the front node
  //Instead, it's just pointing the head to the second node. As a result, the data at
  //the address that l_front_test_1 is pointing to is still there; it's just not in the list anymore
  
}

int main() {
  ContainerTests();
  StackV_main();
  QueueV_main();
  StackL_main();
  QueueL_main();
  RecursionTests();
}