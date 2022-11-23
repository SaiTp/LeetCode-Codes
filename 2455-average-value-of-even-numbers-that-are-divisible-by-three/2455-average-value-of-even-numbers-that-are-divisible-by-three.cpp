class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s=0,c=0;
        for(auto i:nums)
            if(i%6==0)
            {
                c++;
                s+=i;
            }
        if(!c)
            return 0;
        return s/c;
    }
};