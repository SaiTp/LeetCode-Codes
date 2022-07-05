class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),c=1,res=INT_MIN;
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        set<int>s(nums.begin(),nums.end());
        vector<int>num(s.begin(),s.end());
        sort(num.begin(),num.end());
        n=num.size();
        if(n==1)
            return 1;
        for(int i=0;i<n-1;i++)
        {

            if(num[i]+1==num[i+1])
                c++;
            else
            {
                c=1;
            }
            res=max(res,c);
        }
        return res;
    }
};