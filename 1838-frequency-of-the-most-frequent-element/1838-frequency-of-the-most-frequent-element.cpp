class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
         long long  n = nums.size();
        
        long long  windowSum = 0;
        long long  ans = 0;
        long long  l=0;
        sort(nums.begin(),nums.end());//O(NlogN)
        for(long long  r=0;r<n;r++){//O(N)
            //acuire
            windowSum += nums[r];
            
            //release
            while(windowSum+k < (r-l+1)*nums[r]){
                windowSum -= nums[l];
                l++;
            }
            //collect ans
           ans=max(ans,r-l+1);
            
        }
        
        return ans;
    }
};