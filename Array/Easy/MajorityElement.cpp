//https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int t=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]){
                t++;
                if(t>n/2)return nums[i];
            }
            
            else t=1;
        }
        return nums[n-1];
    }
};