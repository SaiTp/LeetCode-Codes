// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n = txt.size();
	    int k = pat.size();
	    vector<int> store(26,0),real(26,0);
	    for(auto it:pat) real[it-'a']++;
	    int i=0,j=0,ans=0;
	    while(j<n){
	        store[txt[j]-'a']++;
	        if(j-i+1<k){
	            j++;
	        }
	        else if(j-i+1==k){
	            if(store==real) ans++;
	            store[txt[i]-'a']--;
	            i++; j++;
	        } 
	    }
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends