class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits == "") return {};
map<char, vector<string>> letters = {
{'2', {"a","b","c"}}, {'3', {"d","e","f"}}, {'4', {"g","h","i"}}, {'5', {"j","k","l"}},
{'6', {"m","n","o"}}, {'7', {"p","q","r","s"}}, {'8', {"t","u","v"}}, {'9', {"w","x","y","z"}}
};

    vector<string> combinations = letters[digits[0]];

    for (int i = 1; i < digits.length(); ++i)
        combinations = combine(combinations, letters[digits[i]]);

    return combinations;
}

vector<string> combine(vector<string> set1, vector<string> set2) {
    vector<string> res;
    for (string a : set1)
        for (string b : set2)
            res.push_back(a+b);
    return res;
}
};