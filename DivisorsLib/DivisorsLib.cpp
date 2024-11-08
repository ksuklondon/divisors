#include <vector>
#include "Divisors.h"

#include <algorithm>
#include <cmath> // For sqrt function

std::vector<unsigned long long> divisors(unsigned long long number) {
    std::vector<unsigned long long> result;

    for (unsigned long long i = 1; i <= sqrt(number); i++) {
        if (number % i == 0) {
            result.push_back(i);

            if (number / i != i) {
                result.push_back(number / i);
            }
        }
    }

    std::sort(result.begin(), result.end());
    return result;
}

//std::vector<unsigned long long> divisors(unsigned long long number)
//{
//	std::vector<unsigned long long> result;
//	for (unsigned long long i = 1; i <= number; ++i)
//	{
//		if (number % i == 0)
//			result.push_back(i);
//	}
//	return result;
//}
