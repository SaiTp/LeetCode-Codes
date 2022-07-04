// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isCircular(string path);

int main(){
    int t;
    cin >> t;
    while(t--){
        string path;
        cin >> path;
        cout << isCircular(path) << endl;
    }
return 0;
}// } Driver Code Ends


string isCircular(string path){
    //complete the function here
     int n = path.size();
   int cnt = 0;
   int p1=0,p2=0;
   for(int i=0; i<n; i++){
       if(path[i]=='L'){
           cnt++;
       }else if(path[i]=='R'){
           cnt--;
       }else{
           int m = abs(cnt);
           if(m%4==0){
               p1++;
           }
           if(m%4==1){
               p2++;
           }
           if(m%4==2){
               p1--;
           }
           if(m%4==3){
               p2--;
           }
       }
   }
   if(p1==0 && p2==0){
       return "Circular";
   }else{
       return "Not Circular";
   }
}