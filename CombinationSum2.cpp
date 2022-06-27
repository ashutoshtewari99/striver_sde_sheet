class Solution {
public:
    void func(int ind,vector<int>ds,vector<vector<int>>&ans,vector<int>candidates, int target, int n)
    {
         if(target==0)
            {
                ans.push_back(ds);
                return;
            }
            
        for(int i=ind;i<n;i++)
        {   
            if (i > ind && candidates[i] == candidates[i - 1]) continue;
            if(candidates[i]>target) break;
        
                ds.push_back(candidates[i]);
                func(i+1,ds,ans,candidates,target-candidates[i],n);
                ds.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        vector<int>ds;
        vector<vector<int>>ans;
        func(0,ds,ans,candidates,target,n);
        return ans;
    }
};