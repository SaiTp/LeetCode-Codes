class Solution {
public:
    string reorderSpaces(string text) {
       int space = 0, spaceNumber = 0;
    istringstream ss(text);
    string word;
    while(ss >> word)
        space++;
    space--;
    
    for(auto x : text)
        if(x == ' ')
            spaceNumber++;
    
    int remainSpaces = 0;
    int dis = 0;
    if(space != 0){
        remainSpaces = spaceNumber%space;
        dis = spaceNumber/space;
    }
    else{
        remainSpaces = spaceNumber;
        dis = 0;
    }
    istringstream str(text);
    string ans = "";
    int sp = space;
    while(str >> word){
        ans+=word;
        if(sp>0){
            int k = dis;
            while(k--)
                ans+=' ';
        }
        sp--;
    }
    while(remainSpaces--)
        ans+=' ';
    return ans;
}
};