// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void preorder(vector<int> nums, int low, int high, vector<int> &res){
        if(low>high){
            return;
        }
        int mid= (low+high)/2;
        res.push_back(nums[mid]);
        preorder(nums, low, mid-1, res);
        preorder(nums, mid+1, high, res);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> res;
        int s=nums.size();
        preorder(nums, 0, s-1, res);
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends