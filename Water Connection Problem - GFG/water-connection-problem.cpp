// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    void DFS (pair<int,int> * arr, int & strt, int & dest, int & min_dia){
       if(arr[strt].first==-1)return;
       min_dia=min(min_dia, arr[strt].second);
       dest=arr[strt].first;
       DFS(arr, arr[strt].first, dest, min_dia);
   }
   vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
   {
       unordered_set<int> stb;
       vector<vector<int>> ans;
       
       pair<int,int> arr[n+1]; // a vs b,d
       for(int i=0;i<n+1;i++)arr[i]={-1,-1};
       
       for(int i=0;i<p;i++)
       {
           stb.insert(b[i]);
           arr[a[i]]={b[i],d[i]};
       }
      
       for(int i=0;i<p;i++){
           
           if(stb.count(a[i])==0){
              int min_dia=INT_MAX;  
               int strt=a[i];
               int dest=b[i];
               DFS(arr,strt,dest,min_dia);
               ans.push_back({strt,dest,min_dia});
           }
       }
       sort(ans.begin(),ans.end());
       return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}  // } Driver Code Ends