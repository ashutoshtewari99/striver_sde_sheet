class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> pascal(numRows);

        for( int row=0;row<numRows;row++)
        {
            // resize the number of colums in a row equal to row number
            pascal[row].resize(row+1,1);
            for( int column=1;column<row;column++)
            {
            pascal[row][column]=pascal[row-1][column-1]+pascal[row-1][column];
            }
            
        }
        return pascal;
    }
};