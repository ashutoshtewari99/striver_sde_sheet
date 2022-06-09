class Solution {
public:
    vector<int> missingNumber(vector<int>& nums) 
    {
        int n=nums.size()+1;
        vector<int> subs(n,0);
        vector<int> res;

        for(int i=0;i<nums.size();i++)
        {
            subs[nums[i]]++;
        }
       
        for(int i=0;i<n;i++)
        {
            if(subs[i]==0 || subs[i]>1)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};