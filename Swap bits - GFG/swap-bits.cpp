// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        int mask1= 0, mask2= 0;
        for(int i=p1;i<p1+n;i++){
            mask1|= (1<<i) & (x);
            x = (x & ~(1 << (i)));
        }
        
        for(int i=p2;i<p2+n;i++){
            mask2|= (1<<i) & (x);
            x = (x & ~(1 << (i)));
        }
        
        mask1 = mask1<<(p2-p1);
        mask2 = mask2>>(p2-p1);
        
        x|=mask1;
        x|=mask2;
        return x;
    }
};

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}  // } Driver Code Ends