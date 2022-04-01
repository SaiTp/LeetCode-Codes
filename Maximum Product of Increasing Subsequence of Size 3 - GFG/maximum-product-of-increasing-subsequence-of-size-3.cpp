// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
    vector<int> maxProductSubsequence(int *arr , int n) 
    { 
        // Complete the function
       vector<int> res(n,-1);
    	int smaller[n];
    
    	set<int>S ; 
    	for (int i = 0; i < n ; i++) 
    	{ 
    		auto j = S.insert(arr[i]); 
    		auto itc = j.first;
    
    		--itc;
    
    		if (itc != S.end()) 
    			smaller[i] = *itc; 
    		else
    			smaller[i] = -1; 
    	} 
    
    	long long int result = INT_MIN; 
    
    	int max_right = arr[n-1]; 
    
    	for (int i=n-2 ; i >= 1; i--) 
    	{ 
    		if (arr[i] >= max_right) 
    			max_right = arr[i]; 
            else if (smaller[i] != -1) {
    			if(result < (long long int)smaller[i] * arr[i] * max_right ){
    			    result = (long long int)smaller[i] * arr[i] * max_right;
    			    res[0] = smaller[i];
    			    res[1] = arr[i];
    			    res[2] = max_right;
    			}
            }
    	} 
        
    	return res;
    } 

};

// { Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 
  // } Driver Code Ends