class Solution
{
public:
    TreeNode *tree(vector &nums, int start, int end)
    {
        if (start > end)
        {
            return NULL;
        }
        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = tree(nums, start, mid - 1);
        root->right = tree(nums, mid + 1, end);
        return root;
    }
    TreeNode *sortedArrayToBST(vector &nums)
    {
        int n = nums.size();
        return tree(nums, 0, n - 1);
    }
};