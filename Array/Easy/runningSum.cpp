//https://leetcode.com/problems/running-sum-of-1d-array/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>rSum;
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp+=nums[i];
            rSum.push_back(temp);
        }
        return rSum;
    }
};