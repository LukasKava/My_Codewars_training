// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

// Examples:
// solution('abc', 'bc') // returns true
// solution('abc', 'd') // returns false

#include <string>
#include <iostream>
bool solution(std::string const &str, std::string const &ending) {
    int x = str.size() - 1;
    int y = ending.size() - 1;
    while (x >= 0 && y >= 0)
    {
      if (str[x--] != ending[y--])
          return (false);
    }
    return true;
}