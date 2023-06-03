//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int s=1,temp=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==temp)nums[i]=INT_MAX;
            else
            {
                temp=nums[i];
                s++;
            }
        }
        sort(nums.begin(),nums.end());
        return s;
    }
};