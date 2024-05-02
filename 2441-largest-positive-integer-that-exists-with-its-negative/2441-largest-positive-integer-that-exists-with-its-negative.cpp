class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // Sort the input array in ascending order
        sort(begin(nums), end(nums));

        int lo = 0;
        int hi = size(nums) - 1;
        
        while (lo < hi) {

            // If the negation of the element at lo is equal to the element at hi
            if (-nums[lo] == nums[hi]) {
                return nums[hi];
            } 
            
            // If the negation of element at lo is greater than element at hi
            else if (-nums[lo] > nums[hi]) { 
                ++lo;
            }
            
            // If the negation of element at lo is smaller than element at hi
            else { 
                --hi;
            }
        }
        return -1;
    }
};