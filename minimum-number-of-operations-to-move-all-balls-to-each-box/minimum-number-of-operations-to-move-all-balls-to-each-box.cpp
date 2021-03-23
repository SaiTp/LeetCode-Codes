class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i,j,t;
        vector<int> res;
        for(i=0;i<boxes.size();i++)
        {
            t=0;
            for(j=0;j<boxes.size();j++)
            {
                if(j==i)
                    continue;
                if(boxes[j]=='1')
                    t+=abs(i-j);    
            }
            res.push_back(t);
        }
    return res;
    }
};