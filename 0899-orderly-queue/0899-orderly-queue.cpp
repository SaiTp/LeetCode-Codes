class Solution {
public:
    string orderlyQueue(string s, int k) {
      if (k == 1) {
            // Make sure the string doesn't get relocated when doubling
            // below, to ensure the string_view is not invalidated.
            s.reserve(size(s) * 2);
            string_view ans{s};
            // Append |s| to itself and look for the smallest string
            // of as the same lenght as |s|.
            s += s;
            string_view sv{s};
            for (int i = 1; i < size(ans); ++i)
                ans = min(ans, sv.substr(i, size(ans)));

            return string{ans};
        }
        
        // With k > 1 we can reorder |s| how we want, so sorting it
        // will yield the lexicographically smallest one.
        // TODO(heder): Use bucket sort.
        sort(begin(s), end(s));
        return s;   
    }
};