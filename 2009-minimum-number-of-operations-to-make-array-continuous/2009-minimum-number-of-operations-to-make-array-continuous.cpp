class Solution {
public:
    int minOperations(vector<int>& A) {
    int n = A.size();
    int ans = n;
    unordered_set<int> hashSet;

    for (int x : A) {
        hashSet.insert(x);
    }

    vector<int> unique(hashSet.begin(), hashSet.end());

    sort(unique.begin(), unique.end());

    int j = 0;
    int m = unique.size();

    for (int i = 0; i < m; i++) {
        while (j < m && unique[j] < unique[i] + n) {
            j++;
        }
        ans = min(ans, n - j + i);
    }

    return ans;
    }
};