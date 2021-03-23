class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> dp(arr.size(),0);
        dp[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            dp[i]=dp[i-1]^arr[i];
        }
        vector<int>v;
         for(int i=0;i<queries.size();i++)
         {
             if(queries[i][0]==0){
                 v.push_back(dp[queries[i][1]]);
             }else{
                 v.push_back(dp[queries[i][1]]^dp[queries[i][0]-1])  ;               
             }
         }     
        return v;
    }
};