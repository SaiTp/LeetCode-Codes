class Solution {
public:
    string maximumTime(string time) {
        vector<int> pos;
        int i;
        for(i=0;i<time.size();i++)
        {
            if(time[i]=='?')
                pos.push_back(i);
        }
        for(i=0;i<pos.size();i++)
        {
            if(pos[i]==0)
            {
                if(time[1]-48>=4)
                time[0]='1';
                else
                time[0]='2';
                if(time[1]=='?')
                {
                    time[0]='2';
                    time[1]='3';
                }
            }
            if(pos[i]==1)
            {
                if(time[0]=='2')
                    time[1]='3';
                else
                    time[1]='9';
                    
            }
            if(pos[i]==3)
            {
                time[3]='5';
            }
            if(pos[i]==4)
            {
                time[4]='9';
            }
        }
        return time;
    }
};