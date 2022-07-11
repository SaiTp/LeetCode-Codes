class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
       
        vector<int> res;
        int start=*rounds.begin();
        int finish=*rounds.rbegin();
        
        if(start < finish) {
            for(int i=start; i<=finish; ++i) res.push_back(i);
        }
        else if(start > finish){
            for(int i=1; i<=finish; ++i) res.push_back(i);
            for(int i=start; i<=n; ++i) res.push_back(i);
        }
        else res.push_back(start);
        
        return res;  
    }
};