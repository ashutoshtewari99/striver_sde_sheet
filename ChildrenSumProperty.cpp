oid changeTree(BinaryTreeNode<int> *root)
{
    if (!root)
        return;
    int child = 0;

    if (root->left)
    {
        child = child + root->left->data;
    }
    if (root->right)
    {
        child = child + root->right->data;
    }

    if (child >= root->data)
    {
        root->data = child;
    }
    else
    {
        if (root->left)
        {
            root->left->data = root->data;
        }
        else if (root->right)
        {
            root->right->data = root->data;
        }
    }
    changeTree(root->left);
    changeTree(root->right);

    int tot = 0;
    if (root->left)
    {
        tot = tot + root->left->data;
    }
    if (root->right)
    {
        tot = tot + root->right->data;
    }
    if (root->right or root->left)
    {
        root->data = tot;
    }
}