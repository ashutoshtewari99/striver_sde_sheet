class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    { 
        int res;
        map<int,int>dup;
        for(int i=0;i<nums.size();i++)
        {
            dup[nums[i]]++;
        }
        
        for(auto val : dup)
        {
            if(val.second > 1)
            {
                res = val.first;
            }
        }   
        return res;
    }
};