class Solution {
public:
    vector<int> countBits(int num) {
        int i,b;
        vector <int> a;
        for(i=0;i<=num;i++)
        {
            b=__builtin_popcount(i);
            a.push_back(b);
        }
        return a;
    }
};