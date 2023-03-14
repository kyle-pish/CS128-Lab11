//Josh Reed; Kyle Pish
//3/31/2022

#include "lab11_part2.h"
#include <iostream>

//Takes an int as input and returns the sum of all integers between the input and 1.
int RecursiveSumUpTo(int top) {
  if (top == 1) {
    return 1;
  }

  return top + RecursiveSumUpTo(top - 1);
}

//Takes two ints as input: min and max, and returns the product of all numbers between min and max, including both.
int RecursiveProductBetween(int min, int max) {
  if (max == min) {
    return max;
  }

  return max * RecursiveProductBetween(min, max - 1);
}

//Takes as input two ints: base and power; returns the result of base^power.
int RecursiveExponent(int base, int power) {
  if (power == 1) {
    return base;
  }

  return base * RecursiveExponent(base, power - 1);
}

void RecursionTests() {
  std::cout << RecursiveSumUpTo(10) << std::endl;
  std::cout << RecursiveProductBetween(5, 10) << std::endl;
  std::cout << RecursiveExponent(2, 8) << std::endl;
}