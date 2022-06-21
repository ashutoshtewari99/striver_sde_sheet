class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low <= high)
        {
            int mid = (high + low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[low] <= nums[mid]) // checking if left half is sorted
            {
                // check if element lies in left half
                if (nums[low] <= target && nums[mid] >= target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            // checking if right half is sorted
            else
            {
                if (nums[mid] <= target && nums[high] >= target)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};