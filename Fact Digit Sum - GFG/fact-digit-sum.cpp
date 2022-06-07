// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	

// long long int fc(int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
    
//     return n*fc(n-1);
// }
vector<int> FactDigit(int n)
{
    int arr[10] = {1,1,2,6,24,120,720,5040,40320,362880};
int i = 9;
vector<int> ans;
while(n>0)
{
while(n>=arr[i])
{
ans.push_back(i);
n-=arr[i];
}
i--;
}
reverse(ans.begin(),ans.end());
return ans;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.FactDigit(N);
		for(auto i: ans)
			cout << i;
		cout << "\n";
	}  
	return 0;
}  // } Driver Code Ends