class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
        //erases duplicates 👆🏻
       int n=nums.size();
        return n;
    }
};