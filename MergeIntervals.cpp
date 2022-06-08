class Solution 
{
public:
        vector<vector<int>> merge(vector<vector<int>>& interval) 
    {
        int n=interval.size();
        vector<vector<int>> ans;
            
        sort(interval.begin(),interval.end());
        ans.push_back(interval[0]);

        int j=0;
            
        for(int i=1;i<n;i++)
        {
            if(ans[j][1]>=interval[i][0])
            {
                ans[j][1]=max(ans[j][1],interval[i][1]);
            }
            else
            {
                j++;
                ans.push_back(interval[i]);
            }
        }
        return ans;
    }
};