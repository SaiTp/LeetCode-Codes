class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s1=0,s2=0;
        for(auto i:nums)
        {
            s1+=i;
            while(i)
            {
                s2+=i%10;
                i/=10;
            }
        }
        return abs(s1-s2);
    }
};