class Solution {
public:
   
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int bmax[26]={0};
        for(auto i:words2)
        {
            int b[26]={0};
            for(auto j:i)
                b[j-'a']++;
            for(int j=0;j<26;j++)
                bmax[j]=max(bmax[j],b[j]);
        }
        vector<string>res;
        for(auto i:words1)
        {
            int c=0;
            int a[26]={0};
            for(auto j:i)
                a[j-'a']++;
            for(int j=0;j<26;j++)
            {
                if(a[j]<bmax[j])
                {
                    c=1;
                    break;
                }
            }
            if(!c)
                res.push_back(i);
        }
        return res;
    }
};