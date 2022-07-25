class Solution {
public:
    int getMinSwaps(string num, int k) {
       string t=num;
        while(k--)
       {
           next_permutation(t.begin(),t.end());
       }
        int ans=0;
        for(int i=0;i<num.size();i++)
        {
            int j=i;
            while(num[i]!=t[j])j++;
            while(i<j)
            {
                swap(t[j],t[j-1]);
                j--;
                ans++;
            }
        }
    return ans;
    }
};