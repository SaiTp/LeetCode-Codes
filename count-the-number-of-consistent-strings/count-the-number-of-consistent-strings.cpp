class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int i,res=0,f,j;
        int freq[26]={0};
        for(i=0;i<allowed.size();i++)
        {
            freq[allowed[i]-97]++;
        }
        for(i=0;i<words.size();i++)
        {
            f=1;
            for(j=0;j<words[i].size();j++)
            {
                if(freq[words[i][j]-97]==0)
                {
                    f=0;
                    break;
                }
                    
            }
            if(f)
            res++;
        }
        return res;
    }
};