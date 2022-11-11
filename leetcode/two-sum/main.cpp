#include <vector>
#include <iostream>
#include "solution.h"

int main()
{
    std::vector<int> test_in = {1,2,3,4,5,6,7};

    std::vector<int> test_out = twoSum(test_in,9);

    std::cout<<"twoSum Solution: {"<<test_out[0]<<", "<<test_out[1]<<"}";

    return 0;
}