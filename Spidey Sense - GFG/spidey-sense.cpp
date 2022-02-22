// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

    public:
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) 
    { 
        // Your code goes here
         queue <vector<int>> q;
       vector<vector<int>> d(M,vector<int>(N));
       for(int i=0;i<M;i++)
       {
           for(int j=0;j<N;j++)
           {
               if(matrix[i][j]=='B')
               {
                   q.push({0,i,j});
                   d[i][j]=0;
               }
               else if(matrix[i][j]=='W')
               d[i][j]=-1;
               else
               d[i][j]=INT_MAX;
           }
       }
       int i,j,s;
       while(!q.empty())
       {
        i=q.front()[1];
        j=q.front()[2];
        s=q.front()[0];
        q.pop();
        if(i-1>=0 && s+1<d[i-1][j])
        {
            d[i-1][j]=s+1;
            q.push({s+1,i-1,j});
        }
        if(j-1>=0 && s+1<d[i][j-1])
        {
            d[i][j-1]=s+1;
            q.push({s+1,i,j-1});
        }
        if(i+1<M && s+1<d[i+1][j])
        {
            d[i+1][j]=s+1;
            q.push({s+1,i+1,j});
        }
        if(j+1<N && s+1<d[i][j+1])
        {
            d[i][j+1]=s+1;
            q.push({s+1,i,j+1});
        }
       }
       
       //there will be some open spaces which are not accessible
       //by any of the bomb present in the matrix.
       //So,this open spaces need to be replaced with the value -1
       //which would be containing INT_MAX
       for(int i=0;i<M;i++)
       {
           for(int j=0;j<N;j++)
           {
               if(d[i][j]==INT_MAX)
               d[i][j]=-1;
           }
       }
       return d;
    } 
};

// { Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int M,N;
        cin>>M;
        cin>>N;

        vector<vector<char> > matrix(M);
        for(int i=0; i<M; ++i)
        {
            matrix[i].resize(N);
            for (int j = 0; j < N; ++j)
                cin>>matrix[i][j];
        }

        vector<vector<int> >result;
        Solution obj;
        result = obj.findDistance(matrix, M,N); 
        for(int i=0; i<M; ++i)
        {
            for (int j = 0; j < N; ++j)
                cout<<result[i][j]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}  // } Driver Code Ends