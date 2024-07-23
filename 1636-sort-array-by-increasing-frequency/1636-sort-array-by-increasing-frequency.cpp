class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int freq[201]={0},i;
        for(i=0;i<nums.size();i++)
        {
            freq[100+nums[i]]++;
        }
         sort(nums.begin(), nums.end(), [&](const int& p1, const int& p2) {
           return freq[p1+100] == freq[p2+100] ? p1 > p2 : freq[p1+100] < freq[p2+100];
        });
        return nums;
    }
};