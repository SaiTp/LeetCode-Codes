class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    if(stones.size()==1) return stones[0];
        priority_queue<int> pq(stones.begin(),stones.end());
        int tmp1=0, tmp2=0;
        while((pq.size()!=1)){
            tmp1 = pq.top();
            pq.pop();
            tmp2 = pq.top();
            pq.pop();
            pq.push(tmp1-tmp2);
        }
        return pq.top();
    }
};