class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<int>ca(n,0),cb(n,0);
        
        cb[0]=s[0]=='b';
        for(int i=1;i<n;i++)
            if(s[i]=='b')
                cb[i]=cb[i-1]+1;
            else
                cb[i]=cb[i-1];
        
        ca[n-1]=s[n-1]=='a';
        for(int i=n-2;i>=0;i--)
            if(s[i]=='a')
                ca[i]=ca[i+1]+1;
            else
                ca[i]=ca[i+1];
        
//         for(auto i:ca)
//             cout<<i<<" ";
        
//         cout<<endl; 
        
//         for(auto i:cb)
//             cout<<i<<" ";
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
            ans=min(ans,ca[i]+cb[i]);

        return ans-1;
    }
};