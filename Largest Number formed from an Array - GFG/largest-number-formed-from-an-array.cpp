// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool comparator(string first,string second)
{
    string one = first+second;
    string two = second+first;
    
    int i=0;
    while(one[i] && two[i])
    {
        if(one[i]>two[i])
            return true;
        else if(one[i]<two[i])
            return false;
        ++i;
    }
    
    return false;
}
	
	string printLargest(vector<string> &arr) {
	    // code here
	    string res;
	    sort(arr.begin(),arr.end(),comparator);
	    for(auto i:arr)
	    res+=i;
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends