class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int k=j+1;
                int l=nums.size()-1;
                
                while(k<l){
                    long long int sum=nums[i];
                    sum+=nums[j];    /* to avoid RE */
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==t){
                        st.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(sum>t)
                    l--;
                    else
                    k++;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i:st)
        ans.push_back(i);
        sort(ans.begin(),ans.end());
        return ans;
    }
};