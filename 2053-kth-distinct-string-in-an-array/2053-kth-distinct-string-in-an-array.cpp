class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        int t=0;
        for(int i=0;i<arr.size();i++)
        {
            if(m[arr[i]]==1)
                t++;
            if(t==k)
                return arr[i];
        }
        return "";
    }
};