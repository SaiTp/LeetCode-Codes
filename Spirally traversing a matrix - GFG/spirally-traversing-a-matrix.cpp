// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> answer;
        int i=0;
        int j=0;
        
        int colend = c-1;
        int colstart = 0;
        
        int rowstart=1;
        int rowend=r-1;
        
        bool movedown=false;
        bool moveup=false;
        
        bool moveright=true;
        bool moveleft=false;
        
        int counter = r * c;

        while(counter--){
            answer.push_back(matrix[i][j]);
            if(!moveup && !movedown){
                if(moveright && j!=colend){
                    j++;
                }else if(moveright && j==colend){
                    movedown=true;
                    colend--;
                    moveright=false;
                    i++;
                }else if(moveleft && j!=colstart){
                    j--;
                }else if(moveleft && j==colstart){
                    moveup=true;
                    colstart++;
                    moveleft=false;
                    i--;
                }
            }
            else{
                if(movedown && i!=rowend){
                    i++;
                }else if(movedown && i==rowend){
                    movedown = false;
                    rowend--;
                    moveleft=true;
                    j--;
                }else if(moveup && i!=rowstart){
                    i--;
                }else if(moveup && i==rowstart){
                    moveup = false;
                    rowstart++;
                    moveright=true;
                    j++;
                }
            }
        }
        return answer;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends