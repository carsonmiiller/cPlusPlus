#include "solution.h"
static std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    int sum = target - 1;
    for(int i = 0; i < (nums.size() - 1); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
                return std::vector<int> {i, j};
        }
    }
    return std::vector<int> {0};
}