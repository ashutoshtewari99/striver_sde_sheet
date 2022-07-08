class Solution
{
public:
    int check(TreeNode *root, bool &val)
    {
        if (!root)
            return true;

        int lh = check(root->left, val);
        int rh = check(root->right, val);
        if (abs(lh - rh) > 1)
        {
            val = false;
        }
        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode *root)
    {
        bool val = true;
        check(root, val);
        return val;
    }
};