class Solution 
{
public:
    int maxProfit(vector<int>& arr) 
    {
        int bp=arr[0],sp=0,profit=0,res=0; //bp=buying price, sp=selling price, res=result
        for(int i=1;i<arr.size();i++)
        {
            sp=arr[i];
            profit=sp-bp;
            bp=min(bp,arr[i]);
            res=max(res,profit);
            
        }
        return res;
    }
};