class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int res=INT_MAX;
        string t;
        vector<string>ans;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j])
                {
                    if(res>i+j)
                    {
                        ans.clear();
                        res=i+j;
                        ans.push_back(list1[i]);
                    }
                    else if(res==i+j)
                    {
                        ans.push_back(list1[i]);
                    }
                }
            }
        }
        return ans;
    }
};