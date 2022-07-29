class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        vector<int>v{a,b,c};
        while(1)
        {
            sort(v.begin(),v.end());
            if(v[2]==0 && v[0]==0 || v[1]==0 &&v[2]==0 || v[0]==0 && v[1]==0)
            break;
            if(v[0])
            v[0]--;
            else
                v[1]--;
            v[2]--;
            ans++;
        }
        return ans;
    }
};