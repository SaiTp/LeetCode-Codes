class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mp;
        for(auto i:num)
            mp[i-'0']++;
        for(int i=0;i<num.size();i++)
        {
            if(num[i]-'0' != mp[i])
                return false;
        }
        return true;
    }
};