class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i,res;
    for(i=0;i<arr.size()-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            res= i;
            break;
        }
    }
    return res;
    }
};