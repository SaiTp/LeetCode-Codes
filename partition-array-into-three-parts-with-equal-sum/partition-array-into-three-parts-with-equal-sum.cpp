class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        auto ts = accumulate(arr.begin(), arr.end(), 0);
        if(ts%3!=0)
            return false;
        int t=0,p=0;
        for(int i=0;i<arr.size();i++)
        {
            t+=arr[i];
            if(t==ts/3)
            {
                p++;
                t=0;
            }
        }
        return p>=3;
    }
};