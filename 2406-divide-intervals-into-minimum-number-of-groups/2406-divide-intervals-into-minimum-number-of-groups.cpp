class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b){
            if(a[0] == b[0])
                return a[1] < b[1];
            
            return a[0] < b[0];
        });
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        pq.push(intervals[0][1]);
        
        int n = intervals.size();
        
        for(int i = 1; i < n; i++)
        {
            int start = intervals[i][0], end = intervals[i][1];
            
            if(pq.empty() || pq.top() < start)
            {
                pq.pop();
                pq.push(end);
            }
            else{
                pq.push(end);
            }
            
        }
        
        
        return pq.size();
    }
};