class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        long long res = 0;
        set<int> s;
        for(int i : nums)s.insert(i);
        vector<int> a;
        for(int i : s) {
            int b =  __builtin_popcount(i);
            res += b * 2 >= k;
            a.push_back(b);
        } 
        sort(a.begin(), a.end());
        long long sz = a.size();
        long long t = sz * (sz - 1);
        int l = 0, r = a.size() - 1;
        while(l < r) {
            if(a[l] + a[r] >= k ) {
                r--;
            } else {
                t -= ((r - l) * 2);
                l++;
            }
        }
        
        return res + t;
    }
};