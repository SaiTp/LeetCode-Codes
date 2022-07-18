class Solution {
public:
    int minMoves(int target, int k) {
        int ans=0;
        if(target<=1)
            return 0;
        if(target%2)
        {
            target--;
            ans++;
        }
        while(target>1 && k)
        {
            if(target%2)
            {
                target--;
                ans++;
            }
            target/=2;
            k--;
            ans++;
        }
        ans+=target-1;
        return ans;
    }
};