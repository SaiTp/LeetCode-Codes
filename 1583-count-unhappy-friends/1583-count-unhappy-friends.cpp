class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
         vector<int> partner(n);
    for (const auto & vec : pairs) {
      partner[vec[0]] = vec[1];
      partner[vec[1]] = vec[0];
    }

    int ret = 0;
    for (int i=0; i<n; ++i) {
      for (const int & pref : preferences[i]) {
        bool unhappy = false;
        if (pref == partner[i])
          break;
        for (const int & prefPref : preferences[pref]) {
          if (prefPref == i) {
            unhappy = true;
            break;
          }
          if (prefPref == partner[pref])
            break;
        }
        if (unhappy) {
          ++ret;
          break;
        }
      }
    }
    return ret;
    }
};