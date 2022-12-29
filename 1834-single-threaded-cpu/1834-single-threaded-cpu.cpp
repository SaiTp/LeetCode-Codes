class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
          int n = tasks.size();
        for(int i=0; i<n; i++){
            tasks[i].push_back(i);          //[1,2] = [1, 2, 0]
        }                                   //      => [enque time, processing time, index]
        
        //sort tasks acc to processing time
        sort(tasks.begin(), tasks.end());
        
        //min-heap(processing time, index)= to collect task with min processing time(same-> acc to index)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int i= 0;
        long long t= tasks[0][0];
        
        vector<int> ans;
        while(!pq.empty() || i<n){
            //if enque time is lesser than current time, push the task to the queue
            while(i<n && t>= tasks[i][0]){
                pq.push({tasks[i][1], tasks[i][2]});
                i++;    //next task
            }
            
            //queue is empty but still loop is working that(i<n) means some task is left to done
            if(pq.empty()){
                t = tasks[i][0];
            }
            
            //tasks are there in queue, if we assign cpu a task it will done it completely
            //assigning min processing task will be profitable so use the top element
            else{
                auto topp = pq.top();
                pq.pop();
                ans.push_back(topp.second);
                t += topp.first;
            }
        }
        
        return ans;
    }
};