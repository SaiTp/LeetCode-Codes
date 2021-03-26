class Solution {
public:
    string reformatNumber(string number) {
      int c=0;
        for (char x : number){
            if (isdigit(x))
                c++;
        }
        string ans="";
        string temp="";
        for ( char x : number){
            if (isdigit(x)){
                temp+=x;
                c--;
            }
            if ((c>=3) && (temp.size()==3)){
                ans+=(temp+'-');
                temp="";
            }

            if ((c==2) &&((temp.size()==2) || (temp.size()==3))){
                ans+=(temp+'-');
                temp="";
            }
        }
        ans+=temp;
        return ans;
    }
};