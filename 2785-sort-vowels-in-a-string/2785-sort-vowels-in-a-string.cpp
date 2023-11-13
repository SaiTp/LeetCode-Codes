class Solution {
public:
    bool isVowel(char c){
    string vows="aeiouAEIOU";
        for(auto i:vows){
            if(c==i) return 1;
        }
        return 0;
    }
    string sortVowels(string s) {
        string vowels="";
        int l=s.length();
        for(int i=0;i<l;i++){
            if(isVowel(s[i])){
                vowels.push_back(s[i]);
            }
        }
        sort(vowels.begin(),vowels.end());
        int p=0;
        for(int i=0;i<l;i++){
            if(isVowel(s[i])){
                s[i]=vowels[p++];
            }
        }
        return s;
    }
};