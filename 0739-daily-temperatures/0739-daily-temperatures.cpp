class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
       int max = T[T.size() - 1];
        vector<int> diffs(T.size(), 0);
        for (int i = T.size() - 2; i >= 0; --i) {
            if (T[i] > max)
                max = T[i];
            if (T[i] < T[i + 1]) {
                diffs[i] = 1;
            } else if (diffs[i + 1] == 0) {
                diffs[i] = 0;
            } else if (T[i] == max) {
                diffs[i] = 0;
            } else {
                for (int j = i + 1; j < T.size(); j += diffs[j]) {
                    if (T[i] < T[j]) {
                        diffs[i] = j - i;
                        break;
                    } else if (j + 1 == T.size()) {
                        diffs[i] = 0;
                        break;
                    }
                }
            }
        }
        return diffs;
    }
};