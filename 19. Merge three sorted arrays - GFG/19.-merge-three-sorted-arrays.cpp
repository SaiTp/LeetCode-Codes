// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
         int n1 = A.size();
       int n2 = B.size();
       int n3 = C.size();

       vector<int> op(n1+n2+n3);
       //Using three pointers

       int i=0, j=0, k=0, l=0;
       while(i<n1 && j<n2 && k<n3){
           
           if(A[i]<=B[j] && A[i]<=C[k])        op[l++] = A[i++]; 
           else if(B[j]<=A[i] && B[j]<=C[k])   op[l++] = B[j++];
           else if(C[k]<=A[i] && C[k]<=B[j])   op[l++] = C[k++];
       }
       if(i>=n1){
           //A exhausts
           while(j<n2 && k<n3){
               if(B[j]<=C[k])  op[l++] = B[j++];
               else            op[l++] = C[k++];
           }
       }
       else if(j>=n2){
           //B exhausts
           while(i<n1 && k<n3){
               if(A[i]<=C[k])  op[l++] = A[i++];
               else            op[l++] = C[k++];
           }
       }
       else if(k>=n3){
           //C exhausts
           while(i<n1 && j<n2){
               if(A[i]<=B[j])  op[l++] = A[i++];
               else            op[l++] = B[j++];
           }
       }
       while(i<n1) op[l++] = A[i++];
       while(j<n2) op[l++] = B[j++];
       while(k<n3) op[l++] = C[k++];
       
       return op;
    } 

};

// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends