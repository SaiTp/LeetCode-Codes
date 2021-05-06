class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
    int sum1 = accumulate(distance.begin(),distance.end(),0);
    if(start > destination)
    {
        int temp= destination;
        destination = start;
        start = temp;
    }
    int sum2 = accumulate(distance.begin()+start,distance.begin()+destination,0);
    sum1 = abs(sum2-sum1);
    return(min(sum1,sum2));
    }
};