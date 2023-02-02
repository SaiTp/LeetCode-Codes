class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
         int orderMap[26] = {0};
        for (int i = 0; i < order.size(); i++){
            orderMap[order[i] - 'a'] = i;
        }
        for (int i = 0; i < words.size() - 1; i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (j >= words[i + 1].size()) return false;
                if (words[i][j] != words[i + 1][j]) {
int currentWordChar = words[i][j] - 'a';
int nextWordChar = words[i + 1][j] - 'a';
                    if (orderMap[currentWordChar] > orderMap[nextWordChar]) return false;
                    else break;
                }
            }
        }

        return true;
    }
};