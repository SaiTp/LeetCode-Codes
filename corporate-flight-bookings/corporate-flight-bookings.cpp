class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int i,t;
        vector <int> out(n,0);
        for(i=0;i<bookings.size();i++)
        {
                out[bookings[i][0]-1]+=bookings[i][2];
                t=bookings[i][1];
                if(t!=n)
                {
                    out[t]+=-bookings[i][2];
                }
        }
        for(i=1;i<n;i++)
        {
            out[i]+=out[i-1];
        }
        return out;
    }
};