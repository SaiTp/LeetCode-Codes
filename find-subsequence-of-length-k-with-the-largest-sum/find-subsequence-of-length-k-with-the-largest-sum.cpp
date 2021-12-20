class Solution {
public:
    static bool mycmp(pair<int,int> p1,pair<int,int> p2)
    {
        return p1.second<p2.second;
    }
    vector<int> maxSubsequence(vector<int>& nums, int k) {
      vector<pair<int,int>>temp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            temp.push_back({nums[i], i});
        }
        sort(temp.rbegin(), temp.rend());
        sort(temp.begin(), temp.begin()+k, mycmp);
        for(int i=0; i<k ;i++){
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};