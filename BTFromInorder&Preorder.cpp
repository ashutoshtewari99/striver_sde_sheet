#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;

    Node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int index = 0;
    int curr = preorder[index];
    index++;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}
int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}
/* 

//LEETCODE SOLUTION//

class Solution
{
public:
    TreeNode *helper(vector<int> &pre, vector<int> &in, int inS, int inE, int preS, int preE)
    {

        if (inS > inE)
            return NULL;

        int rootdata = pre[preS];
        int rootindex = -1;
        for (int i = inS; i <= inE; i++)
        {
            if (rootdata == in[i])
            {
                rootindex = i;
                break;
            }
        }

        int LinS = inS, LinE = rootindex - 1, LpreS = preS + 1, LpreE = LinE - LinS + LpreS;
        int RinS = rootindex + 1, RinE = inE, RpreS = LpreE + 1, RpreE = preE;

        TreeNode *root = new TreeNode(rootdata);
        root->left = helper(pre, in, LinS, LinE, LpreS, LpreE);
        root->right = helper(pre, in, RinS, RinE, RpreS, RpreE);
        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int n = preorder.size();
        return helper(preorder, inorder, 0, n - 1, 0, n - 1);
    }
}; */