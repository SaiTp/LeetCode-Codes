class Solution {
public:
    typedef long long ll;
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n);
        map<ll, ll> mp1, mp2, mp3, mp4;
        
        for(int i=0; i<n; i++){
            mp1[nums[i]]+=i;
            mp4[nums[i]]++;
        }
    
        for(int i=0; i<n; i++){
            mp2[nums[i]]++;
            mp3[nums[i]]+=i;
            ll fre = mp2[nums[i]];
            ll count = mp3[nums[i]];
            ll sum=0;
        
            sum = i*(fre) - 2*count  + mp1[nums[i]] - i*(mp4[nums[i]] - fre);
            
            ans[i] = sum;
        }
        return ans;
    }
};