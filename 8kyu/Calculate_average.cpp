// Write a function which calculates the average of the numbers in a given list.

// Note: Empty arrays should return 0.
#include <vector>
#include <numeric>

double calcAverage(const std::vector<int>& values)
{
  // your code
	if (values.empty() == true)
		return (0.0);
  	double  average = std::accumulate(values.begin(), values.end(), 0.0) / values.size();
  	return (average);
}
