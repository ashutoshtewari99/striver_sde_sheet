
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int x = nums1.size() + nums2.size();
        double res = 0;
        vector<int> v;

        for (int i = 0; i < nums1.size(); i++)
        {
            v.push_back(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(), v.end());

        int n = v.size();
        if (n % 2)
        {
            res = v[(n / 2)];
            // res=res/2;
        }
        else
        {
            res = v[(n / 2)] + v[(n / 2) - 1];
            res = res / 2;
        }
        return res;
    }
};