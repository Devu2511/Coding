class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        string ans;
        int a=0,b=0,i=0;
        while(ans.size()<n+m)
        {
            if(i%2==0 && a<n)
            {
                ans+=word1[a];
                a++;
            }
            else if(b<m)
            {
                ans+=word2[b];
                b++;
            }
            i++;
        }
        return ans;
    }
};