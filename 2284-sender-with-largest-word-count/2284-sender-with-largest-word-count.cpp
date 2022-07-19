class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n=messages.size();
        string res;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            string t;
            int c=0;
            stringstream ss(messages[i]);
            while(ss>>t)
                c++;
            mp[senders[i]]+=c;
        }
        int mx=INT_MIN;
        for(auto i:mp)
        {
           
            if(i.second==mx && res<i.first)
            {
                res=i.first;
            }
            else if(i.second>mx)
            {
                res=i.first;
                mx=i.second;
            }
        }
        return res;
    }
};