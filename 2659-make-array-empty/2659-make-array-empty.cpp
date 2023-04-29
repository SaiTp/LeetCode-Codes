class Solution {
public:
	int tree[400005];
    #define mid ((start+end)/2)
	inline void update(int node,int start,int end,int l,int r,int val){
		if(start>end || start>r || end<l)return ;
		if(start>=l && end<=r){tree[node]+=val;return ;}
		update(node*2,start,mid,l,r,val),update(node*2+1,mid+1,end,l,r,val);
		tree[node]=tree[node*2]+tree[node*2+1];
	}
	inline int query(int node,int start,int end,int l,int r){
		if(start>end || start>r || end<l)return 0;
		if(start>=l && end<=r){return tree[node];}
		return query(node*2,start,mid,l,r)+query(node*2+1,mid+1,end,l,r);
	}
    long long countOperationsToEmptyArray(vector<int>& nums) {
        set<pair<int,int>> st;
        int ind=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
			st.insert({nums[i],i});
			update(1,0,n-1,i,i,1);
		}
		long long cev=0;
		while(st.size()){
			int x=(*st.begin()).second;
            //cout<<x<<endl;
			if(x>=ind){cev+=query(1,0,n-1,ind,x-1);ind=x;update(1,0,n-1,x,x,-1);st.erase(st.begin());cev++;continue;}
			else{cev+=query(1,0,n-1,ind,n-1)+query(1,0,n-1,0,x-1);ind=x;update(1,0,n-1,x,x,-1);}
			cev++;
            st.erase(st.begin());
		}
		return cev;
    }
};
