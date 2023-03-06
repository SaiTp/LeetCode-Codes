class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i,res=0,c=1,f=0;
        for(i=0;i<arr.size();c++)
        {
            if(arr[i]==c)
            {
             i++;
            }
            else
            {
                res++;
            }
            if(res==k)
            {
                f=1;
                break;
            }
        }
        if(!f)
        {
            return i+k;
        }
        return c;
    }
};