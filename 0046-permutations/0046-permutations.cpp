class Solution {
public:
    vector<vector<int>> permute(vector<int>& a) {
        vector<vector<int>>ans;
        int n = a.size();
        sort(a.begin(),a.end());
        ans.push_back(a);
        while(next_permutation(a.begin(),a.end()))
            ans.push_back(a);
        return ans;
    }
};