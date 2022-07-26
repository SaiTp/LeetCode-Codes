class Solution {
public:
    bool closeStrings(string w1, string w2) {
        int s1,s2;
        s1=w1.size();
        s2=w2.size();
        if(s1!=s2)
            return false;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(auto i:w1)
            f1[i-'a']++;
        for(auto i:w2)
            f2[i-'a']++;
        for(int i=0;i<26;i++)
            if( (!f1[i] && f2[i])  || (f1[i] && !f2[i]))
                return false;
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        // for(auto i:f1)
        //     cout<<i;
        // cout<<endl;
        // for(auto i:f2)
        //     cout<<i;
        return f1==f2;
    }
};