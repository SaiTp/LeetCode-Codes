class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int t=s.size();
        vector<int>res(t);
        for(int i=0;i<t;i++)
        {
            int c=0;
            int ypos=startPos[0];
            int xpos=startPos[1];
            // cout<<xpos<<" "<<ypos<<endl;
            for(int j=i;j<t;j++)
            {
                if(s[j]=='R')
                    xpos++;
                else if(s[j]=='L')
                    xpos--;
                else if(s[j]=='D')
                    ypos++;
                else 
                    ypos--;
                // cout<<xpos<<" "<<ypos<<endl;
                if(xpos>=n || ypos>=n || xpos<0 || ypos<0)
                    break;
                    c++;
            }
            res[i]=c;
        }
        return res;
    }
};