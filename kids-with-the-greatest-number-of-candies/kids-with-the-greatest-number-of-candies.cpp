class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracandies) {
        vector <bool> out;
        int m=0,i;
        for(i=0;i<candies.size();i++)
        {
            if(m<candies[i])
                m=candies[i];
        }
        for(i=0;i<candies.size();i++)
        {
            if(candies[i]+extracandies>=m)
                out.push_back(true);
            else
                out.push_back(false);
        }
        return out;
    }
};