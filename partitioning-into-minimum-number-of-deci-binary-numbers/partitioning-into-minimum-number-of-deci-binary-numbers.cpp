class Solution {
public:
    int minPartitions(string n) {
       if(n.size()<2)
           return n[0]-'0';
        int max=0;
        for(int i=0;i<n.size();i++)
        {
            int t=n[i]-'0';
            if(t>max)
                max=t;
        }
        return max;
    }
};