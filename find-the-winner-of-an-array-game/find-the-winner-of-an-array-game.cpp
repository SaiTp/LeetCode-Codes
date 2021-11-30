class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        int k1=k, winner=arr[0];
	for(int i=1; i<arr.size() && k1; i++){
		if(winner<arr[i]){
			winner=arr[i];
			k1=k;
		}
		k1--;
	}
	return winner;
    }
};