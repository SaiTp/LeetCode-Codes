class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;

    for (int j = 0; j < words.size(); ++j)
    {
        for (int i = 0; i < words.size(); ++i)
        {
            auto iter = words[j].find(words[i]);
            if (iter != string::npos && words[i] != words[j])
            {
                auto f = find(begin(result), end(result), words[i]);
                if (f == end(result))
                {
                    result.push_back(words[i]);
                }
            }
        }
    }
    return result;
    }
};