class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size()+1;
        vector<int> subs(n,0);
        int res;

        for(int i=0;i<nums.size();i++)
        {
            subs[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++)
        {
            if(subs[i]==0 || subs[i]>1)
            {
                res=i;
            }
        }
        return res;
    }
};