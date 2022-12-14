//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
         int i = 0, cnt = 0, curr = 0;
        vector<int> ans = {-1};
        for(int j=0; j<n; j++) {
            str[j] == '0' ? cnt++ : cnt--;
            if(cnt > curr) ans = {i + 1, j + 1}, curr = cnt;
            if(cnt < 0) i = j + 1, cnt = 0;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends