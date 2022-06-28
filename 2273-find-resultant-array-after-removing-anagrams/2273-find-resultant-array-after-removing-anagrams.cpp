class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       std::vector<std::string> dest;
        std::string lastKey;
        for (std::string const &word : words)
        {
            std::string key(word);
            std::sort(key.begin(), key.end());
            if (key != lastKey)
            {
                dest.push_back(word);
                std::swap(lastKey, key);
            }
        }
        return dest;
    }
};