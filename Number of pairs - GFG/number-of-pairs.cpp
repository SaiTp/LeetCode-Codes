// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
        int cnt[1001]={0},smaller[1001]={0};
       for(int i=0;i<M;i++)
           cnt[X[i]]++;
       for(int i=3;i<=1000;i++)
           smaller[i]+=smaller[i-1]+cnt[i-1]; // smaller[i] -> no of elements < i
       
       long long ans=0;
       for(int i=0;i<N;i++){
           switch(Y[i]){
               case 1:
                   ans+=M-cnt[1];
                   break;
               case 2:
               case 4:
                   ans+=cnt[3];
                   break;
               case 3:
                   break;
               default:
                   ans+=smaller[Y[i]];
                   break;
           }
       }
       return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends