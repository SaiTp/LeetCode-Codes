class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int mx[n];
        int mi[n];
        mx[0]=height[0];
        int res=0;
        mi[n-1]=height[n-1];
        for(int i=1;i<n;i++)
            mx[i]=max(mx[i-1],height[i]);
        for(int i=n-2;i>=0;i--)
            mi[i]=max(mi[i+1],height[i]);
        for(int i=0;i<n;i++)
            res+=min(mi[i],mx[i])-height[i];
        return res;
    }
};