// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int Xor=0,res1=0,res2=0;
        
        for(int i=0;i<nums.size();i++){
            Xor=Xor^nums[i];
        }
        
        int sb=Xor& (~(Xor-1)); // Rightmost Set bit
        
        for(int i=0;i<nums.size();i++){
            if((nums[i]&sb)!=0){
                res1=res1^nums[i];
            }
            else
                res2=res2^nums[i];
        }
        vector<int> ans;
        ans.push_back(res1<res2?res1:res2);
        ans.push_back(res1>res2?res1:res2);
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends