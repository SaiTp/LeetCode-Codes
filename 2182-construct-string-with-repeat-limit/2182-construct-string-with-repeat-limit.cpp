class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
         int sl = s.length();
    if(sl==0)
        return "";
        int freq[26] = {0};
        queue<int>chars;
        for(int i=0;i<s.length();i++)freq[s[i]-'a']++;
        for(int i=25;i>=0;i--)if(freq[i]>0) chars.push(i);
        
        string res = "";
        int largerChar;        
        bool isEmpty;
        
        // loop until queue is empty
        while(!chars.empty())
        {
            largerChar = chars.front();            
            chars.pop();
            
            while(freq[largerChar]>0)
            {        
                // append larger char repeatLimit time in result string
                for(int i=0;i<repeatLimit && freq[largerChar]>0;i++)
                {
                    res+= ('a' + largerChar);
                    freq[largerChar]--;                    
                }
                
                isEmpty = chars.empty();
                
                // add a separator char as next larger char from queue
                // if larger char freq > 0                
                if(!isEmpty && freq[largerChar]>0)
                {
                    res+= ('a' + chars.front());
                    freq[chars.front()]--;
                    if(freq[chars.front()]==0)chars.pop();
                }
                
                // if no next larger char available then stop operations
                if(isEmpty)break;
            }
        }
        
        return res;
    }
};