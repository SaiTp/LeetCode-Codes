class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,long> mmap;
        for(const auto& t : tasks)
            ++mmap[t];
        int total=0;
        for (const auto& m : mmap)
        {
            if ( m.second == 1)
                return -1;
            else
            {
                total +=(m.second+2)/3;
            }
        }
        return total;
    }
};