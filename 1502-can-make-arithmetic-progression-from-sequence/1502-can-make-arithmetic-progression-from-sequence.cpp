class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i,d;
        bool res=true;;
        d=arr[1]-arr[0];
        for(i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]!=d)
            {
                res=false;
                break;
            }
        }
        return res;
    }
};