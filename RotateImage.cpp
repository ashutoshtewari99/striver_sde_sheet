class Solution {
public:
    void rotate(vector<vector<int>>& mat1) 
    {
        int n=mat1.size();
        vector<vector<int> > mat2(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
            {
                mat2[j][n-i-1]=mat1[i][j];
            }  
        }
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
            {
                mat1[i][j]=mat2[i][j];
            }  
        }
        
    }
};