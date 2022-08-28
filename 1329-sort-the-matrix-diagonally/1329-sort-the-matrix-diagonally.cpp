class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
           int m = mat.size();
        int n = mat[0].size();
        int i, j, p, q;
		
		//Solving Upper Right Triangle
        for(i=0;i<n;i++)
        {
			//Extracting diagonals and sorting them
            p = 0;
            q = i;
            vector<int> a;
            while(p < m && q < n)
            {
                a.push_back(mat[p][q]);
                p++;
                q++;
            }
            sort(a.begin(), a.end());
			
			//Emplacing back the sorted diagonal
            p = 0;
            q = i;
            j = 0;
            while(p < m && q < n)
            {
                mat[p][q] = a[j];
                p++;
                q++;
                j++;
            }
        }
		
		//Solving Lower Left Triangle
        for(i=1;i<m;i++)
        {
			//Extracting diagonals and sorting them
            p = i;
            q = 0;
            vector<int> a;
            while(p < m && q < n)
            {
                a.push_back(mat[p][q]);
                p++;
                q++;
            }
            sort(a.begin(), a.end());
			
			//Emplacing back the sorted diagonal
            p = i;
            q = 0;
            j = 0;
            while(p < m && q < n)
            {
                mat[p][q] = a[j];
                p++;
                q++;
                j++;
            }
        }
        return mat;
    }
};