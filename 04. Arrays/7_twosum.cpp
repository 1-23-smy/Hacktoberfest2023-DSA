#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    
    while (start <= end) {
        int currSum = nums[start] + nums[end];
        if (currSum < target) {
            start++;
        } else if (currSum > target) {
            end--;
        } else {
            return {start, end};
        }
    }
    
    return {};
}

int main() {
    std::vector<int> nums = {3, 2, 4};
    int target = 9;
    std::vector<int> res = twoSum(nums, target);
    
    for (int i : res) {
        std::cout << i << std::endl;
    }
    
    return 0;
}
