class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
       int  res = 0;
	for(int i = 0; i < n; ++i)
	{
		int sum = 0;
		for(int j = i; j < n; ++j)
		{
			sum += A[j];
			if(sum == 0)
			{
				res = max(res, j-i+1);
			}
		}
	}
	return res;
    }
};