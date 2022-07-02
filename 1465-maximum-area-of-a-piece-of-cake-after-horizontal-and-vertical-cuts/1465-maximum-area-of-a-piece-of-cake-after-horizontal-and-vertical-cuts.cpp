class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());             //sorted the given array
        sort(verticalCuts.begin(), verticalCuts.end());
        int i=1;
        int area = 0, mxh = horizontalCuts[0], mxw = verticalCuts[0];
        for(i=1; i<horizontalCuts.size(); i++)
        {
            mxh = max(mxh, horizontalCuts[i]-horizontalCuts[i-1]);      //taking maximum differenece b/w two horizontal consecutive cuts
        }
        mxh = max(mxh, h-horizontalCuts[i-1]);
        for(i=1; i<verticalCuts.size(); i++)
        {
            mxw = max(mxw, verticalCuts[i]-verticalCuts[i-1]);          ////taking maximum differenece b/w two consecutive vertical cuts
        }
        mxw = max(mxw, w-verticalCuts[i-1]);
        int M = 1000000007;
        return ((long)mxh*mxw) % (int)M; 
    }
};