class Solution 
{
public:
    int maxProfit(vector<int>& arr) 
    {
        int res=0;
        int brought_price=arr[0];
        for(int i=1;i<arr.size();i++)
        {
           int profit = arr[i]-brought_price;
            res=max(res, profit);
            
            brought_price=min(arr[i], brought_price);
        }
        return res;
    }
};