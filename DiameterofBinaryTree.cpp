class Solution
{
public:
    int getDia(TreeNode *root, int &d)
    {
        if (root == NULL)
            return 0;

        int lh = getDia(root->left, d);
        int rh = getDia(root->right, d);

        d = max(d, lh + rh);
        return max(lh, rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int d = 0;
        getDia(root, d);
        return d;
    }
};