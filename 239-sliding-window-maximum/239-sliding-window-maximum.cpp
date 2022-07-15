class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
         deque<int>dq;
        int n=arr.size();
        vector <int> ans;
       for(int i=0;i<k;i++){
           while(!dq.empty() and dq.back()<arr[i]){
               dq.pop_back();
           }
           dq.push_back(arr[i]);
       }
       ans.push_back(dq.front());
       for(int i=k;i<n;i++){
           
           if(dq.front()==arr[i-k]){
               dq.pop_front();
           }
            while(!dq.empty() and dq.back()<arr[i]){
               dq.pop_back();
           }
           dq.push_back(arr[i]);
            ans.push_back(dq.front());
       }
       
       
       return ans;
    }
};