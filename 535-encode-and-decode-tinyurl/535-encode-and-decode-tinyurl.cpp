class Solution {
public:

    int num=0;
    map<string,string>mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string add="http://tinyurl.com/";
        add+=to_string(num++);
        mp[add]=longUrl;
        return add;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));