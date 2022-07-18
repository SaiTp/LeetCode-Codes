class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long int>res;
        if(finalSum % 2)
            return res;
        long long int t=2,k=0,temp=2;
        while(t<=finalSum)
        {
            temp+=2;
            t+=temp;
            k++;
        }
        t=2;
        temp=2;
        while(k>1)
        {
            res.push_back(t);
            finalSum-=t;
            t+=2;
            
            k--;
        }
        res.push_back(finalSum);
        // cout<<k;
        return res;
    }
};