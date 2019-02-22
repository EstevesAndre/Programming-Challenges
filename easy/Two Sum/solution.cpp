class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(unsigned short i = 0; i < nums.size(); i++)
        {
            for(unsigned short j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};