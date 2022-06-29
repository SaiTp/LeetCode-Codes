class Solution {
public:
    string digsum(string n)
    {
        int sum=0;
        for(auto i:n)
            sum+=i-'0';
        return to_string(sum);
    }
    string digitSum(string s, int k) {
        while(s.size()>k)
        {
            string t;
            for(int i=0;i<s.size();i+=k)
            {
                t+=digsum(s.substr(i,k));
            }
            s=t;
        }
        return s;
    }
};