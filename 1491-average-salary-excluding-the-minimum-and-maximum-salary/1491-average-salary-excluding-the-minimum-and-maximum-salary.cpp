class Solution {
public:
    double average(vector<int>& salary) {
        double sum;
        int max,min,i;
        max=min=salary[0];
        for(i=0;i<salary.size();i++)
        {
            sum+=salary[i];
            if(max<salary[i])
                max=salary[i];
            else if(min>salary[i])
                min=salary[i];
        }
        sum-=min+max;
        return sum/(salary.size()-2);
    }
};