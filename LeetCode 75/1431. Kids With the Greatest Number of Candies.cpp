class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(),candies.end());
        vector<bool>ans;
        int i=0;
        while(i<candies.size())
        {
            if(candies[i]+extraCandies>=max)ans.push_back(true);
            else ans.push_back(false);
            i++;
        }
        return ans;
    }
};