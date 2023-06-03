//	https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int x=i;
            int y=i+1,z=n-1;
            while(y<z)
            {
                int sum=nums[x]+nums[y]+nums[z];
                if(sum>0)z--;
                else if(sum<0)y++;
                else{
                    vector<int>temp={nums[x],nums[y],nums[z]};
                    sol.push_back(temp);
                    while(y<z && nums[y]==nums[y+1])y++;
                    while(y<z && nums[z]==nums[z-1])z--;
                    y++;
                    z--;
                }
            }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return sol;
    }
};