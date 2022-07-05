/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

void traversal(BinaryTreeNode<int> *root, vector<int> &pre, vector<int> &in, vector<int> &post)
{

    if (root == NULL)
    {
        return;
    }
    pre.push_back(root->data);
    traversal(root->left, pre, in, post);
    in.push_back(root->data);
    traversal(root->right, pre, in, post);
    post.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root)
{
    vector<vector<int>> ans;
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    traversal(root, pre, in, post);
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
}