class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int f[26]={0};
              for(int i=0;i<words.size();i++)
              for(int j=0;j<words[i].size();j++)
              f[words[i][j]-'a']++;
              for(int i=0;i<26;i++)
              if(f[i]%words.size()!=0)
              return false;
              return true;
    }
};