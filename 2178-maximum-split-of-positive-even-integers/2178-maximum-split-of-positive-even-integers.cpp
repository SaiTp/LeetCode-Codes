class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
         if(finalSum%2!=0)return {};
        vector<long long> ans;
    
        
        for(long long i=2;finalSum-i>=i+2;i+=2)
        {
            ans.push_back(i);
            finalSum-=i;
            
            
        }        
        
        ans.push_back(finalSum);
        
        return ans;
    }
};