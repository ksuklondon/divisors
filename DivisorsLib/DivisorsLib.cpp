#include <vector>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
	std::vector<unsigned long long> result;
	for (unsigned long long i = 1; i <= number; ++i)
	{
		if (number % i == 0)
			result.push_back(i);
	}
	return result;
}
