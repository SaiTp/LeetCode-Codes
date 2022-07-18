class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        unordered_map<int,int> m;
        m[sum]=1;
        for(auto i:nums) {
           sum+=i;
         count+=m[sum-k];
            m[sum]++;
        }
        return count;
    }
};