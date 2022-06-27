class Solution {
public:
    void func(int ind,vector<int>ds,vector<vector<int>>&ans,vector<int>candidates, int target, int n)
    {
        if(ind==n)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            func(ind,ds,ans,candidates,target-candidates[ind],n);
            ds.pop_back();
        }
        func(ind+1,ds,ans,candidates,target,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        int n=candidates.size();
        vector<int>ds;
        vector<vector<int>>ans;
        func(0,ds,ans,candidates,target,n);
        return ans;
    }
};