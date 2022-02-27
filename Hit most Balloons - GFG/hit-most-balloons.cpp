// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#include<bits/stdc++.h>
#include <boost/functional/hash.hpp>
class Solution {
  public:
  int maxPointOnSameLine(vector< pair<int, int> > points)
{
    int N = points.size();
    if (N < 2)
        return N;
 
    int maxPoint = 0;
    int curMax, overlapPoints, verticalPoints;
 
    // here since we are using unordered_map
    // which is based on hash function
    //But by default we don't have hash function for pairs
    //so we'll use hash function defined in Boost library
    unordered_map<pair<int, int>, int,boost::hash<pair<int, int> > > slopeMap;
 
    // looping for each point
    for (int i = 0; i < N; i++)
    {
        curMax = overlapPoints = verticalPoints = 0;
 
        // looping from i + 1 to ignore same pair again
        for (int j = i + 1; j < N; j++)
        {
            // If both point are equal then just
            // increase overlapPoint count
            if (points[i] == points[j])
                overlapPoints++;
 
            // If x co-ordinate is same, then both
            // point are vertical to each other
            else if (points[i].first == points[j].first)
                verticalPoints++;
 
            else
            {
                int yDif = points[j].second - points[i].second;
                int xDif = points[j].first - points[i].first;
                int g = __gcd(xDif, yDif);
 
                // reducing the difference by their gcd
                yDif /= g;
                xDif /= g;
 
                // increasing the frequency of current slope
                // in map
                slopeMap[make_pair(yDif, xDif)]++;
                curMax = max(curMax, slopeMap[make_pair(yDif, xDif)]);
            }
 
            curMax = max(curMax, verticalPoints);
        }
 
        // updating global maximum by current point's maximum
        maxPoint = max(maxPoint, curMax + overlapPoints + 1);
 
        // printf("maximum collinear point
        // which contains current point
        // are : %d\n", curMax + overlapPoints + 1);
        slopeMap.clear();
    }
 
    return maxPoint;
}
    int mostBalloons(int N, pair<int, int> arr[]) {
        // Code here
        vector<pair<int,int>>res;
        for(int i=0;i<N;i++)
        res.push_back(arr[i]);
        return maxPointOnSameLine(res);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        pair<int, int> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
        }
        Solution ob;
        cout << ob.mostBalloons(N, arr) << endl;
    }
}  // } Driver Code Ends