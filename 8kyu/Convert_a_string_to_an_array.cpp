// Write a function to split a string and convert it into an array of words.

// Examples (Input ==> Output):
// "Robin Singh" ==> ["Robin", "Singh"]
// "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

std::vector<std::string> string_to_array(const std::string& s) 
{
    int     					space_nbr;
    size_t  					space_pos;
    std::string					tmp(s);
    std::vector<std::string>	splitted;

	space_nbr = std::count(s.begin(), s.end(), ' ');
    while (space_nbr != 0)
    {
    	space_pos = tmp.find(" ");
    	splitted.push_back(tmp.substr(0, space_pos));
    	tmp.erase (tmp.begin(), tmp.begin() + space_pos + 1);
    	space_nbr--;
    }
    splitted.push_back(tmp.substr(0, tmp.size()));
    return splitted;
}