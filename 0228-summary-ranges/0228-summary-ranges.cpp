class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> out;
        string t;
        int i,n=nums.size(),j,f;
        if(n==0)
            return out;
        if(n==1)
        {
            out.push_back(to_string(nums[0]));
            return out;
        }
        for(i=0;i<nums.size();i++)
        {
            j=i;
            f=0;
            t="";
            while(j<nums.size()-1 && nums[j]+1==nums[j+1])
            {
                f=1;
                j++;
            }
            if(f==0)
                t=to_string(nums[i]);
            else
            {
                t=to_string(nums[i])+"->"+to_string(nums[j]);
                i=j;
            }
            out.push_back(t);
            
        }
        return out;
    }
};