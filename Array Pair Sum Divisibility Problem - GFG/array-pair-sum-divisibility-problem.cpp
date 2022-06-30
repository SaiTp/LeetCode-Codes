// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()%2!=0)
       return false;
       int siz = nums.size();
       for(int i=0;i<siz;i++)
       {
           nums[i] = nums[i]%k; 
       }
       unordered_map<int , int>ump;
       for(int i = 0;i<siz;i++)
       {
           ump[nums[i]]++;
       }
       for(int i = 0;i<siz;i++)
       {
           if(nums[i]!=0)
           {
           if(nums[i] == k-nums[i])
           {
               if(ump[nums[i]]%2!=0)
               {
                   return false;
               }
           }
           if(ump.find(k-nums[i])==ump.end()) 
           return false;
           if(ump[nums[i]]!=ump[k-nums[i]])
           return false;}
       }
       return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends