class SubrectangleQueries {
public:
    vector<vector<int>> rec;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        int i;
        for(i=0;i<rectangle.size();i++)
            rec.push_back(rectangle[i]);
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        int i,j;
        for(i=row1;i<=row2;i++)
            for(j=col1;j<=col2;j++)
                rec[i][j]=newValue;
    }
    
    int getValue(int row, int col) {
        return rec[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */