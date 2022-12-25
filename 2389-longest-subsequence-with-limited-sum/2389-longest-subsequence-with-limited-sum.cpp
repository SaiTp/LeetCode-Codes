class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
     vector<int>ans;
        sort(nums.begin(),nums.end());
        int j;
        for(int i=0;i<queries.size();i++)
        {
            long long int sum=0;
            for(j=0;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum>queries[i])
                {
                    break;
                }
            }
            ans.push_back(j);
           
        }
        return ans;
    }
};