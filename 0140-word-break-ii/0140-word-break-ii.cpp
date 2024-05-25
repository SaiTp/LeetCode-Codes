class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        // Map to store results of subproblems
        unordered_map<int, vector<string>> dp;

        // Iterate from the end of the string to the beginning
        for (int startIdx = s.size(); startIdx >= 0; startIdx--) {
            // List to store valid sentences starting from startIdx
            vector<string> validSentences;

            // Iterate from startIdx to the end of the string
            for (int endIdx = startIdx; endIdx < s.size(); endIdx++) {
                // Extract substring from startIdx to endIdx
                string currentWord = s.substr(startIdx, endIdx - startIdx + 1);

                // Check if the current substring is a valid word
                if (isWordInDict(currentWord, wordDict)) {
                    // If it's the last word, add it as a valid sentence
                    if (endIdx == s.size() - 1) {
                        validSentences.push_back(currentWord);
                    } else {
                        // If it's not the last word, append it to each sentence
                        // formed by the remaining substring
                        vector<string> sentencesFromNextIndex = dp[endIdx + 1];
                        for (const auto& sentence : sentencesFromNextIndex) {
                            validSentences.push_back(currentWord + " " +
                                                     sentence);
                        }
                    }
                }
            }
            // Store the valid sentences in dp
            dp[startIdx] = validSentences;
        }
        // Return the sentences formed from the entire string
        return dp[0];
    }

private:
    // Helper function to check if a word is in the word dictionary
    bool isWordInDict(const string& word, const vector<string>& wordDict) {
        for (const auto& dictWord : wordDict) {
            if (dictWord == word) {
                return true;
            }
        }
        return false;
    }
};