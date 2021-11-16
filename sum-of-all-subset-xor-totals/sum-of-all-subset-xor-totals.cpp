class Solution {
public:
    int sum=0;
    void dfs(vector<int>& nums,int i,int temp){
        if(i==0){
         sum=sum+temp;
         return;}
        
          dfs(nums,i-1,temp^nums[i-1]);
          dfs(nums,i-1,temp);
        
    }
    
    
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
          dfs(nums,n ,0);
            return sum;
    }
};