class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int,int>m;
        for(int i=0;i<pieces.size();i++)
        {
            m[pieces[i][0]]=i;
        }
        int i=0;
        while(i<arr.size())
        {
            //If any element of arr is absent in pieces then return false
            if(m.find(arr[i])==m.end())
            {
                return false;
            }
            // Otherwise pick up that vector whose first element is arr[i]
            // and compare all the elements of that selected vector with 
            // the elements of arr. If in the mean time any mismatch occurs
            // simply return false.
            else
            {
                int j=0;
                vector<int>tmp=pieces[m[arr[i]]];
                while(i<arr.size() && j<tmp.size())
                {
                    if(arr[i]!=tmp[j])
                    {
                        return false;
                    }
                    i++;
                    j++;
                }
            }
        }
        return true;
    }
};