// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	long double maximumProfit(int n, long long t, vector<long long> w, vector<long long> p){
	    // Code here.
	   priority_queue<pair<double,pair<int,int>>>pq;
	    for(int i=0;i<n;i++)
	    {
	        double c=(double)p[i]/w[i];
	        pq.push({c,{p[i],w[i]}});
	    }
	    long double ans=0;
	    while(!pq.empty()&&t>0)
	    {
	        int a=pq.top().second.first;
	        int b=pq.top().second.second;
	        pq.pop();
	        int x=sqrt(b);
	        if(x*x==b)
	        continue;
	        if(t>b)
	        {
	            ans+=double(a);
	            t-=b;
	        }
	        else
	        {
	            double q=double(a)/b;
	            double qq=q*t;
	            ans+=qq;
	            t-=t;
	        }
	        
	        
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends