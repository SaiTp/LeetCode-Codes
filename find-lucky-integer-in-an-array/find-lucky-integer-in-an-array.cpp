class Solution {
public:
    int findLucky(vector<int>& arr) {
        int f[501]={0};
        int i,res=-1;
        for(i=0;i<arr.size();i++)
        {
            f[arr[i]]++;
        }
        for(i=500;i>0;i--)
        {
            if(i==f[i])
            { 
            res=i;
            break;
            }
        }
        return res;
    }
};