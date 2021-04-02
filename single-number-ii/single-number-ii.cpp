class Solution {
public:
    int singleNumber(vector<int>& nums) {
    long long int sum=0, set_sum=0;
   unordered_set<int> uniq;
     
   for(int n:nums)
   {
      sum+=n;
      if(uniq.insert(n).second)
         set_sum += n;
   }
        
   return (3*set_sum - sum)/2;
    }
};