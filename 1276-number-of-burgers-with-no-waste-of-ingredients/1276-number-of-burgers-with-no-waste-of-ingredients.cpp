class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        if(t%2)
            return {};
        int x=(t/2)-c;
        int y=c-x;
        if(x<0 || y<0)
            return {};
        return {x,y};
    }
};