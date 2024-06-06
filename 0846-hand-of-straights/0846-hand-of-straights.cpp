class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0)
            return false;
        map<int,int>m;
        for(int i=0;i<n;i++)
            m[hand[i]]++;
        for(int i=0;i<n/groupSize;i++)
        {
            auto it=m.begin();
            int k=it->first;
            for(int j=k;j<k+groupSize;j++)
            {
                if(m.find(j) == m.end())
                {
                    return false;
                }
                
                m[j]--;
                if(m[j] == 0)
                {
                    m.erase(j);
                }
            }
        }
        return true;
    }
};