class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
         int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>>a(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int x=-k;x<=k;x++){
                    if(i+x>=0 && i+x<n){
                        int l=max(j-k,0);
                        int r=j+k+1;
                        a[i+x][l]+=mat[i][j];
                        if(r<m) a[i+x][r]-=mat[i][j];
                    }
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<m;j++){
                sum+=a[i][j];
                a[i][j]=sum;
            }
        }
        return a;
    }
};