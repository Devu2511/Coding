//https://leetcode.com/problems/product-of-array-except-self/description/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),product=1;
        vector<int>sol(n,0);
        int z=0;
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)product*=nums[i];
            else {
                z++;
                x=i;
            }
        }
        if(z>=2)return sol;
        else if(z==1)sol[x]=product;
        else{
            for(int i=0;i<n;i++)
            {
                sol[i]=product/nums[i];
            }
        }
        return sol;
    }
};