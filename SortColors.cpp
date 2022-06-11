class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        vector<int>color;
        int n=nums.size();
        for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                    color.push_back(nums[i]);
            }
        for(int i=0;i<n;i++)
            {
                if(nums[i]==1)
                    color.push_back(nums[i]);
            }
        for(int i=0;i<n;i++)
            {
                if(nums[i]==2)
                    color.push_back(nums[i]);
            }
        nums.clear();
        for(int i=0;i<n;i++)
            {
                nums.push_back(color[i]);
            }
    }
};