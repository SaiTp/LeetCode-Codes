

class Solution {
private:
    vector<int> time;
    int totalTrips;
public:
    long minimumTime(vector<int>& time, int totalTrips) {
        this->time = time;
        this->totalTrips = totalTrips;
        long left = 1;
        long right = 0;
        for (int t : time) {
            right = max(right, (long)t);
        }
        right = right * totalTrips;
        long ans = right;
        while (left <= right) {
            long mid = (left + right) / 2;
            if (check(mid)) {
                ans = mid;
                right = mid-1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
    
    bool check(long givenTime) {
        long actualTrips = 0;
        for (int t : time) 
            actualTrips += givenTime / t;
        if(actualTrips >= totalTrips)
            return true;
        return false;
    }
};