class Solution {
public:
    bool squareIsWhite(string coordinates) {
     int x,y,t;
        x=coordinates[0]-96;
        y=coordinates[1]-'0';
        t=x+y;
        if(t%2)
            return true;
        return false;
    }
};