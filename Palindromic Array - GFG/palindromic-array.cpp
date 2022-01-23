// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool isPalindrome(int n) {
        string num = to_string(n);
        int p1 = 0, p2 = num.size() - 1;
        while(p1 < p2)
            if(num[p1++] != num[p2--])
                return false;
        return true;
    }
    
    int PalinArray(int a[], int n)
    {
        for(int i = 0; i < n; i++) 
            if(!isPalindrome(a[i]))
                return 0;
        return 1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends