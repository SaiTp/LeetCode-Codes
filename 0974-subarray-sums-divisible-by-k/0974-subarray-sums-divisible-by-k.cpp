class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         int n=nums.size(),i=0,count=0,sum=0;
        unordered_map<int, int> x;
        x[0] = 1;
        while(i<n){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0) rem+=k;
            if(x[rem]!=0) count+=x[rem];
            x[rem]++;
            i++;
        }
        return count;
    }
};