class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int res=0;
        
        map<int,int >v;
        for(auto val: nums)
        {
            v[val]++;
        }
        
        for(auto val: v)
        {
            if(val.second > nums.size()/2)
            {
                res=val.first;
            }
        }
        return res;
    }
};