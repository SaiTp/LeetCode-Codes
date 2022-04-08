class KthLargest {
public:
   priority_queue<int,vector<int>,greater<int>>q;
    int x;
    KthLargest(int k, vector<int>& nums) {
        for(int i = 0;i<nums.size();i++)
        {
            q.push(nums[i]);
            while(q.size()>k)
                q.pop();
        }
        x =k;
    }
    
    int add(int val) {
        q.push(val);
        while(q.size()>x)
            q.pop();
        return q.top();
     
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */