class Solution {
public:
    bool find132pattern(vector<int>& nums) {
         if(nums.size()<3)
            return false;
        
        
        vector<int> premn(nums.size());
        premn[0]=nums[0];
        
        
        
        //finding prefix min
        for(int i=1;i<nums.size();i++){
            if(nums[i]<premn[i-1]){
                premn[i]=nums[i];
            }else{
                premn[i]=premn[i-1];
            }
        }
        
        //stack to hold large value
        stack<int> stk;
        stk.push(0);
        for(int i =1; i<nums.size(); i++) {
            while(!stk.empty() && nums[stk.top()] <= nums[i]) {
                stk.pop();
            }
            if(!stk.empty()) { //exist a larger element nums[j]
                if(premn[stk.top()] < nums[i]) {
                    return true;
                }
            }
            stk.push(i);
        }
        return false;
    }
};