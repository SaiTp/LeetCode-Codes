class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
         int score = 0;
        //Ascending sort.
        sort(tokens.begin(), tokens.end());
        //Two Pointers.
        int i = 0, j = tokens.size()-1;        
        while(i <= j){            
            if(power >= tokens[i]){
                power -= tokens[i];
                ++i;
                ++score;
            }
            //If score is non-zero and we still have something to add. 
            //As it is ascending, removing a greater or equal value can be used to add score.
            //Hence, i should not be equal to j.
            else if(score && i != j){
                --score;
                power += tokens[j];
                --j;
            }
            else
                break;              
        }
        return score;
    }
};