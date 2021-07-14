class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int i = 0; int j = 0;
        int prod = 1;
        int num_subarray = 0;
        while (j < nums.size())
        {
            prod = prod * nums[j];
            while(prod>=k && i <=j)
            {
                prod = prod/nums[i]; 
                i = i + 1;
            }
            
            if (prod < k)
            {   
                num_subarray = num_subarray + j - i + 1;
            }
            
          
            j = j + 1;
            }
        
    return num_subarray;
    }
};
