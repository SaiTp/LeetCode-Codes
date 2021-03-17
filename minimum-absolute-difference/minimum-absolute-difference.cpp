class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i,min=INT_MAX,t,f;
        vector<vector<int>> res;
        for(i=0;i<arr.size()-1;i++)
        {
            t=arr[i+1]-arr[i];
            if(t<min)
                min=t;
        }
        for(i=0;i<arr.size()-1;i++)
        {
            f=0;
            vector<int> temp;
            if(min==arr[i+1]-arr[i])
            {
                f=1;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
            }
            if(f)
            res.push_back(temp);
        }
        return res;
    }
};