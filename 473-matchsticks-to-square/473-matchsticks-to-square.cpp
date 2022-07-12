class Solution {
public:
vector<bool>visit;
    bool solve(vector<int>&nums,int sum,int x,int count,int j)
    {
        if(count==4)
            return true;
        
       if(sum==x)
            return solve(nums,0,x,count+1,0); 
        
        bool flag=false;
        for(int i=j;i<nums.size();i++)
        {
            if(!flag && !visit[i] && sum+nums[i]<=x){
                visit[i]=true;
                flag=flag||solve(nums,sum+nums[i],x,count, i+1);
                visit[i]=false;
            }
                
        }
        
        return flag;
    }
    bool makesquare(vector<int>& nums) {
        int sum=0;
         visit.assign(nums.size(), false);
        for(auto x:nums) sum+=x;
        
        if(sum%4!=0) return 0;
        
        int x=sum/4;
        int count=0;
        
       return solve(nums,0,x,count,0);
       
    }
};