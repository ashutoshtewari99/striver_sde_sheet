class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> pascal;
        int row=0,column;
        for(int rows=0;row<numRows;rows++)
        {
            vector<int> temp(row+1,1);
            column=0;
            for(int column=1;column<row;column++)
            {
                temp[column]=pascal[row-1][column-1]+pascal[row-1][column];
            }
            pascal.push_back(temp);
            row++;
        }
        return pascal;
    }
};