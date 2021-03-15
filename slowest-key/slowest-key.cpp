class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int pressd[26]={0};
        int i,n=keysPressed.size();
        int max=0,maxi;
        pressd[keysPressed[0]-97]=releaseTimes[i];
        for(i=1;i<n;i++)
        {
            int t=releaseTimes[i]-releaseTimes[i-1];
            if(pressd[keysPressed[i]-97]<t)
            pressd[keysPressed[i]-97]=t;
        }
        for(i=25;i>=0;i--)
        {
            if(max<pressd[i])
            {
                max=pressd[i];
                maxi=i;
            }
        }
        return 'a'+maxi;
    }
};