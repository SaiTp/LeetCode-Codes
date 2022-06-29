class Solution {
public:
    int convertTime(string current, string correct) {
        int h1,h2,m1,m2,ans=0;
        h1=(current[0]-'0')*10+(current[1]-'0');
        m1=(current[3]-'0')*10+(current[4]-'0');
        h2=(correct[0]-'0')*10+(correct[1]-'0');
        m2=(correct[3]-'0')*10+(correct[4]-'0');
        int t=abs((h1*60+m1)-(h2*60+m2));
        if(t>=60)
        {
            ans+=t/60;
            t=t%60;
        }
        if(t>=15)
        {
            ans+=t/15;
            t=t%15;
        }
        if(t>=5)
        {
            ans+=t/5;
            t=t%5;
        }
        if(t>=1)
        {
            ans+=t/1;
            t=t%1;
        }
        return ans;
    }
};