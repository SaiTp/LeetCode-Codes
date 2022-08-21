class Solution {
public:
    #define ll long long 
    vector<long long> maximumSegmentSum(vector<int>& nums, vector<int>& remove) {
         int n = nums.size();
        vector<ll> pre(n,0);

        pre[0] = nums[0];
        for(int i = 1; i < n; i++){
            pre[i] += pre[i-1] + nums[i];        // create prefix sum
        }

        set<int> ind;         // ind will store removed index
        ind.insert(-1);
        ind.insert(n);

        vector<ll> ans(n,0);
        multiset<ll> mp;     // mp will store sum of all segments 
        mp.insert(pre[n-1]);

        for(int i = 0; i < n; i++){
			int cur = remove[i];

            auto it = ind.lower_bound(cur);
            int r = *it;                         // right removed index
            int l = *(prev(it));                 // left removed index
            
            ll cur_sum = pre[r-1] - ( l == -1 ? 0 : pre[l] );
            mp.erase(mp.find(cur_sum));                 // remove current segment sum

            ll left_sum = ( cur == 0 ? 0 : pre[cur-1] ) - (l == -1? 0 : pre[l] );
            ll right_sum = (r == 0 ? 0 : pre[r-1]) - pre[cur];

            mp.insert(left_sum);                // insert left segment sum
            mp.insert(right_sum);               // insert right segment sum

            ind.insert(cur);
            ans[i] = *(mp.rbegin());           // take the maximum
        }
        return ans;
    }
};