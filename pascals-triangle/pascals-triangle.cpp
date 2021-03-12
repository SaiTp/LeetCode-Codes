class Solution {
public:
    vector<vector<int>> generate(int n) {
       vector<vector<int>> ret;
    ret.push_back({1});
    if(n>=2)
        ret.push_back({1,1});
    if(n>=3){
        for(int i=3;i<=n;i++){
            vector<int> temp(i);
            temp[0]=1;
            temp[i-1]=1;
            for(int j=0;j<i;j++){
                if(temp[j]!=1){
                    temp[j] = ret[i-2][j-1] + ret[i-2][j];
                }
            }
            ret.push_back(temp);
        }
    }
    return ret;
    }
};