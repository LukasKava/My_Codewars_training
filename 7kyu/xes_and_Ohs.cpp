// Check to see if a string has the same amount of 'x's and 'o's. 
// The method must return a boolean and be case insensitive. 
// The string can contain any char.

// Examples input/output:
// XO("ooxx") => true
// XO("xooxx") => false
// XO("ooxXm") => true
// XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
// XO("zzoo") => false

#include <string>

bool XO(const std::string& str)
{
  // your code here
  int o = 0;
  int x = 0;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == 'x' || str[i] == 'X')
      x++;
    if (str[i] == 'o' || str[i] == 'O')
      o++;
  }
  if (x != o)
      return (false); 
  return true;
}
