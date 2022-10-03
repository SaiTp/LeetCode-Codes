class Solution {
public:
    int minCost(string col, vector<int>& nt) {
          int n = col.size();
        int c=1;
        int sum = nt[0];
        int mx = nt[0];
        int ans=0;
        
        for(int i=1;i<n;i++){
            if(col[i] != col[i-1]){
                ans += (sum - mx);
                sum = nt[i];
                c=1;
                mx = nt[i];
            }else{
                mx = max(mx,nt[i]);
                sum += nt[i];
                c++;
            }
        }
        ans += (sum-mx);
        return ans;
    }
};