class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int>res;
        map<int,int >v;
        for(auto val: nums)
        {
            v[val]++;
        }
        
        for(auto val: v)
        {
            if(val.second > nums.size()/3)
            {
                res.push_back(val.first);
            }
        }
        return res;
    }
};