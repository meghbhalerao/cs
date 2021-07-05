'''
Problem Statement 
Given an array of positive numbers and a positive number ‘S’, find the length of the smallest contiguous subarray whose sum is greater than or equal to ‘S’. Return 0, if no such subarray exists.
Example 1:
Input: [2, 1, 5, 2, 3, 2], S=7 
Output: 2
Explanation: The smallest subarray with a sum great than or equal to '7' is [5, 2].
Example 2:
Input: [2, 1, 5, 2, 8], S=7 
Output: 1
Explanation: The smallest subarray with a sum greater than or equal to '7' is [8].
Example 3:
Input: [3, 4, 1, 1, 6], S=8 
Output: 3
Explanation: Smallest subarrays with a sum greater than or equal to '8' are [3, 4, 1] or [1, 1, 6].
'''
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int i = 0;
        int j = 0;
        int sum_curr = 0;
        int curr_len = 0;
        int min_l = nums.size() + 2;
    
        while (j < nums.size())
        {   
            sum_curr = sum_curr + nums[j];
            if (sum_curr < target)
            {
                j = j + 1;
            }
            else if (sum_curr >= target)
            {
                while(sum_curr >= target && i <= j)
                {
                    curr_len = j - i + 1;
                    if (curr_len < min_l)
                    {
                        min_l = curr_len;
                    }
                    
                    sum_curr = sum_curr - nums[i];
                    i = i + 1;
                    
                }
             j = j + 1;
            }
        
        }
    if (min_l == nums.size() + 2)
    {
        return 0;
    }
    else
    {
        return min_l;
    }
    }
};

