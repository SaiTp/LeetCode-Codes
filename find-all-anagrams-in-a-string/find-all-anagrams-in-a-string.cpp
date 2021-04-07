class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>out;
        if(s.size()==0)
            return out;
        int fre[26]={0};
        for(int i=0;i<p.size();i++)
            fre[p[i]-97]++;
        int l=0,r=0,count=p.size();
        while(r<s.size())
        {
            if(fre[s[r++]-97]-->=1)
                count--;
                if(count==0)
                    out.push_back(l);
            if(r-l==p.size() && fre[s[l++]-97]++ >=0)
                count++;
        }
        return out;
    }
};