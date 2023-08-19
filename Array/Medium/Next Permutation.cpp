//https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return;
        int k=n-2;
        while(k>=0 &&nums[k]>=nums[k+1])k--;
        if(k<0 || n==2)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        int x=n-1;
        while(k<x)
        {
            if(nums[k]<nums[x])
            {
                int temp=nums[k];
                nums[k]=nums[x];
                nums[x]=temp;
                break;
            }
            x--;
        }
        reverse(nums.begin()+k+1,nums.end());

     return;   
    }
};