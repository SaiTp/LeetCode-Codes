class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int numZeroes = 0;
        int length = arr.size() - 1;
        int startIndex;
        for (startIndex = 0; startIndex <= length - numZeroes; startIndex++) {
           if (arr[startIndex] == 0) {
               if (startIndex == length - numZeroes) {
                   arr[length] = 0;
                   length--;
                   break;
               }
               numZeroes++;
           }
        }
        
        if (numZeroes == 0) { return; }
        
        for (int i = length - numZeroes; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[i + numZeroes] = 0;
                numZeroes--;
            }
            arr[i + numZeroes] = arr[i];
        }
    }
};