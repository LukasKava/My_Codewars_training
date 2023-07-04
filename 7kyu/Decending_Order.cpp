#include <cinttypes>
#include <vector>
#include <algorithm>
#include <iostream>

// Your task is to make a function that can take any non-negative integer as
// an argument and return it with its digits in descending order.
// Essentially, rearrange the digits to create the highest possible number.

// Examples:
//----------------------
// Input: 42145 Output: 54421
// Input: 145263 Output: 654321
// Input: 123456789 Output: 987654321

uint64_t descendingOrder(uint64_t a)
{
  std::vector<int> a_temp;
  for (uint64_t b = a; b != 0; b /= 10)
    a_temp.push_back(b % 10);

  std::sort(a_temp.begin(), a_temp.end());
  
  long long final_result = 0;
  for (int i  = (int)a_temp.size() - 1; i >= 0;  i--)
    final_result = (final_result + a_temp[i]) * 10;
  return (final_result / 10);
}