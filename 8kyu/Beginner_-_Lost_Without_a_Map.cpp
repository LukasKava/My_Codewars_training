// Given an array of integers, return a new array with each value doubled.

// For example:
// [1, 2, 3] --> [2, 4, 6]
#include <vector>

std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int>  new_values;
  new_values.assign(values.begin(), values.end());
  
  for (std::vector<int>::iterator it = new_values.begin(); it != new_values.end(); it++)
    *it = *it * 2;
  return new_values;
}