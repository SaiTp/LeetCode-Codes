class Solution {
public:
    static bool comp(int n1,int n2)
    {
        string t1,t2;
        t1=to_string(n1);
        t2=to_string(n2);
        return t1+t2>t2+t1;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        if(!nums[0])
            return "0"; 
        string res;
        for(auto i: nums)
            res+=to_string(i);
        return res;
    }
};