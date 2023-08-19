//	https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,n=nums.size(),r=n-1;
        vector<int> sol(n);
        for(int i=0;i<n;i++)
        {
            if(l==r){
                sol[n-i-1]=nums[l]*nums[l];
                break;
            }
            if(abs(nums[l])>abs(nums[r]))
            {
                sol[n-i-1]=nums[l]*nums[l];
                l++;
            }
            else
            {
                sol[n-i-1]=nums[r]*nums[r];
                r--;
            }
        }
        return sol;
    }
};