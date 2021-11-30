class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>m1;
        map<string,int>m2;
        int ans=0;
        for(int i=0;i<words1.size();i++)
            m1[words1[i]]++;
        for(int i=0;i<words2.size();i++)
            m2[words2[i]]++;
        for(auto i:m1)
            if(i.second==1 && m2[i.first]==1)
                ans++;
        return ans;
    }
};