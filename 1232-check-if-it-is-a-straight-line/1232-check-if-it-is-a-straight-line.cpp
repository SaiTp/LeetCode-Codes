class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
         int n = c.size();
        if(n <= 1) return false;
        else if(n==2) return true;
        int dx = c[1][0] - c[0][0], dy = c[1][1] - c[0][1];
        
       
        for(int i=2; i<n; i++){
            int ddx = c[i][0]-c[1][0], ddy = c[i][1]-c[1][1];
     
            if(dx*ddy != dy*ddx) return false;
        }
        return true;
    }
};