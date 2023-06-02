//	https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        vector<pair<int,int>>ques;
        for(int z=0;z<nums.size();z++)
        {
            ques.push_back(make_pair(nums[z],z));
        }
        sort(ques.begin(),ques.end());
        while(i<j)
        {
            int sum=ques[i].first + ques[j].first;
            if(sum==target)break;
            else if(sum>target)j--;
            else i++;
        }
        vector<int>result={ques[i].second,ques[j].second};
        return result;
    }
};