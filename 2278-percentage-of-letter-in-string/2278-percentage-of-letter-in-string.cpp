class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=count(s.begin(),s.end(),letter);
		return (n*100)/s.size();
    }
};