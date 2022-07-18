class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>dev;
        int ans=0;
        for(int i=0;i<bank.size();i++)
        {
            int c=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                    c++;
            }
            if(c)
                dev.push_back(c);
        }
        // for(auto i:dev)
        //     cout<<i;
        if(dev.size()==0)
            return 0;
        for(int i=0;i<dev.size()-1;i++)
            ans+=dev[i]*dev[i+1];
        return ans;
    }
};