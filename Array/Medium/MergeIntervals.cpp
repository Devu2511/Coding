//	https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;
        sort(intervals.begin(),intervals.end());
        vector<int>temp={intervals[0][0],intervals[0][1]};
        int n=intervals.size();
        for(int i=1;i<n;i++)
        {
            if(temp[1]>=intervals[i][0])temp[1]=max(intervals[i][1],temp[1]);
            else if(temp[1]<intervals[i][0]){
                sol.push_back(temp);
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
            }
        }
        sol.push_back(temp);
        return sol;
    }
};