class Solution {
public:
    int partitionString(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            unordered_set<char>st;
            while(i<s.size() && st.find(s[i])==st.end())
            {
                st.insert(s[i]);
                i++;
            }
            i--;
            ans++;
            st.clear();
        }
        return ans;
    }
};