class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
       const auto sum = std::accumulate( nums.begin(), nums.end(), 0 );
        if ( sum % k )
        {
            return false;
        }
        const auto target = sum / k;
        std::vector<int> table( target + 1, 0 );
        table.front() = 1;
        
        for( const auto& num : nums )
        {
            for( int i = target; i >= num; --i )
            {
                if ( table[i - num] )
                {
                    table[i]++;
                    if ( i == target && i - num > 0 )
                    {
                        table[i - num]--;
                    }
                }
            }
        }
        
        return table[target] >= k;
    }
};