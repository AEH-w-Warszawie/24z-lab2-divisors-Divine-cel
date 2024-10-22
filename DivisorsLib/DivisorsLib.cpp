
#include <vector>
#include <cmath>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    for (unsigned long long i = 1; i <= std::sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i); // i is a divisor
            if (i != number / i) // Avoid adding the square root twice
            {
                result.push_back(number / i); // number / i is the corresponding divisor
            }
        }
    }
    return result;
}