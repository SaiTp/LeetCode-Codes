class Solution {
public:
    int minSteps(string s, string t) {
        int fs[26]={0},ft[26]={0};
        for(auto i:s)
            fs[i-'a']++;
        for(auto i:t)
            ft[i-'a']++;
        int ans=0;
        for(int i=0;i<26;i++)
            ans+=abs(fs[i]-ft[i]);
        return ans;
    }
};