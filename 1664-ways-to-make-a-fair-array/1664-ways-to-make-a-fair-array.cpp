class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int evesum=0,oddsum=0,n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
            if(i%2)
                oddsum+=nums[i];
            else
                evesum+=nums[i];
        int prevev = 0 , prevod = 0;
        for(int i = 0 ; i < n; i++)
        {
            int val = 0 , val1 = 0;
            if(i%2==0)
            {
                val = prevev + oddsum - prevod;
                val1 = prevod + evesum - prevev - nums[i];
                prevev+=nums[i];
            }
            if(i%2!=0)
            {
                val = prevod + evesum - prevev;
                val1 = prevev + oddsum - prevod - nums[i];
                prevod+=nums[i];
            }
            if(val==val1)
            {
                cnt++;
            }
        }
        return cnt;
    }
};