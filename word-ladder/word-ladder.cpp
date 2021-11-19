class Solution {
public:
    int ladderLength(string startWord, string targetWord, vector<string>& wordList) {
       bool present=false;
        set<string> s;
        for(int i=0;i<wordList.size();i++)
        {
            if(targetWord==wordList[i])
            present=true;
            s.insert(wordList[i]);
        }
        if(present==false)
        return 0;
        queue<string>q;
        q.push(startWord);
        int depth=0;
        while(!q.empty())
        {
            int c=q.size();
            depth++;
            for(int i=0;i<c;i++)
            {
                string st=q.front();
                q.pop();
                for(int j=0;j<st.size();j++)
                {
                    string temp=st;
                    for(int k=0;k<26;k++)
                    {
                        temp[j]='a'+k;
                        if(st.compare(temp)==0)
                            continue;   //Skip the same word
                        if(temp.compare(targetWord)==0)
                            return depth+1; //endWord found
                       if(s.find(temp)!=s.end())
                        {
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0; 
    }
};