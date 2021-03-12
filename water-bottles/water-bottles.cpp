class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
     int ans =numBottles;
        int bootle=numBottles;
        while(bootle>= numExchange){
            int r = bootle%numExchange; 
            bootle= bootle/numExchange; 
            ans+=bootle;
            bootle+=r;
        }
        return ans;
    }
};