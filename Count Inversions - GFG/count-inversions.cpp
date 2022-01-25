// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long counter;

void Merge(long long A[], long long L, long long mid, long long R){
   long long B[R+1];
   long long i = L, j = mid +1, k = L;
   while(i <= mid && j <= R){
       if(A[i] <= A[j])
           B[k++] = A[i++];
       else{
           B[k++] = A[j++];
           counter += mid - i +1;
   }
 }
 while(i <= mid)
     B[k++] = A[i++];
 while(j <= R)
     B[k++] = A[j++];
     
 for(long long i = L; i <= R; i++)
      A[i] = B[i];
}

void MergeSort(long long A[], long long L, long long R){
   if (L<R){
       long long mid = (L+R)/2;
       MergeSort(A, L, mid);
       MergeSort(A, mid+1, R);
       Merge(A, L, mid, R);
   }
}
long long int inversionCount(long long A[], long long N)
{
    counter = 0;
    MergeSort(A, 0, N-1);
    return counter;
}

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends