class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>t1;
        vector<int>t2;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2)
                t1.push_back(nums[i]);
            else
                t2.push_back(nums[i]);
        }
        sort(t1.rbegin(),t1.rend());
        sort(t2.begin(),t2.end());
        int j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=(i%2)?t1[j++]:t2[k++];
        }
        return nums;
    }
};