class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       map<int, int> freq;
    map<int, vector<int>> pos;
    int mx = INT_MIN;
    for(int i = 0; i < nums.size(); i++)
    {
        mx = max(mx, ++freq[nums[i]]);        
        pos[nums[i]].push_back(i);
    }
       
    //get shortest distance
    int dist = INT_MAX;
    for(auto num : nums)
    {
        if(freq[num] == mx)            
            dist = min(dist, pos[num].back() - pos[num].front());         
    }
    
    return dist + 1;
    }
};