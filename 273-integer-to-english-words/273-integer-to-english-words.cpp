class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        string s;
        while (num > 0) {
            s += num % 10 + '0';
            num /= 10;
        }
        int cnt = 0, len = s.size();
        stack<string> ans;
        HandleLessThanOneThousand(s, cnt, len, ans);
        HandleLessThanOneMillion(s, cnt, len, ans);
        HandleLessThanOneBillion(s, cnt, len, ans);
        HandleMoreThanOneBillion(s, cnt, len, ans);
        string strAns;
        while (!ans.empty()) {
            strAns += ans.top();
            strAns += " ";
            ans.pop();
        }
        strAns.pop_back();
        return strAns;
    }
    
    void HandleLessThanOneThousand(string& s, int& cnt, int len, stack<string>& ans) {
        string str = getSingle(s[cnt]);
        if (cnt + 1 >= len) {
            ans.push(str);
            ++cnt;
            return;
        }
        if (s[cnt + 1] == '1') {
            string temp = "";
            temp += s[cnt + 1];
            temp += s[cnt];
            str = getSpecialTen(temp);
            ans.push(str);
        } else {
            if (s[cnt] != '0') {
                str = getSingle(s[cnt]);
                ans.push(str);
            }
            if (s[cnt + 1] != '0') {
                str = getTen(s[cnt + 1]);
                ans.push(str);
            }
        }
        if (cnt + 2 >= len) {
            cnt += 2;
            return;
        }
        if (s[cnt + 2] != '0') {
            ans.push("Hundred");
            str = getSingle(s[cnt + 2]);
            ans.push(str);
        }
        cnt += 3;
    }
    
    void HandleLessThanOneMillion(string& s, int& cnt, int len, stack<string>& ans) {
        if (cnt % 3 == 0) {
            if (cnt < len) {
                if (s[cnt] != '0' || (cnt + 1 < len && s[cnt + 1] != '0') || (cnt + 2 < len && s[cnt + 2] != '0')) {
                    ans.push("Thousand");
                }
                HandleLessThanOneThousand(s, cnt, len, ans);
            }
        }
    }
    
    void HandleLessThanOneBillion(string& s, int& cnt, int len, stack<string>& ans) {
        if (cnt % 6 == 0) {
            if (cnt < len) {
                if (s[cnt] != '0' || (cnt + 1 < len && s[cnt + 1] != '0') || (cnt + 2 < len && s[cnt + 2] != '0')) {
                    ans.push("Million");
                }
                HandleLessThanOneThousand(s, cnt, len, ans);
            }
        }
    }
    
    void HandleMoreThanOneBillion(string& s, int& cnt, int len, stack<string>& ans) {
        if (cnt % 9 == 0) {
            if (cnt < len) {
                if (s[cnt] != '0' || (cnt + 1 < len && s[cnt + 1] != '0') || (cnt + 2 < len && s[cnt + 2] != '0')) {
                    ans.push("Billion");
                }
                HandleLessThanOneThousand(s, cnt, len, ans);
            }
        }
    }
    
    string getSingle(char c) {
        switch (c) {
            case '0': return "Zero";
            case '1': return "One";
            case '2': return "Two";
            case '3': return "Three";
            case '4': return "Four";
            case '5': return "Five";
            case '6': return "Six";
            case '7': return "Seven";
            case '8': return "Eight";
            case '9': return "Nine";
        }
        throw "getSingle";
    }
    
    string getSpecialTen(string t) {
        if (t == "10")  return "Ten";
        if (t == "11")  return "Eleven";
        if (t == "12")  return "Twelve";
        if (t == "13")  return "Thirteen";
        if (t == "14")  return "Fourteen";
        if (t == "15")  return "Fifteen";
        if (t == "16")  return "Sixteen";
        if (t == "17")  return "Seventeen";
        if (t == "18")  return "Eighteen";
        if (t == "19")  return "Nineteen";
        throw "getSpecialTen";
    }
    
    string getTen(char c) {
        switch (c) {
            case '2': return "Twenty";
            case '3': return "Thirty";
            case '4': return "Forty";
            case '5': return "Fifty";
            case '6': return "Sixty";
            case '7': return "Seventy";
            case '8': return "Eighty";
            case '9': return "Ninety";
        }
        throw "getTen";
    }
};