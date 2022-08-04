class Solution {
public:
    void fill(TreeNode* root){
        if(!root || (!root->right && !root->left))return;
        TreeNode* temp = root->right; //make copy
        root->right = root->left; //shift
        root->left=NULL; //mark left null
        fill(root->right); //call recursion on right
        while(root->right)root=root->right; //while because we need to go to the last node of list
        root->right=temp; //now shift temp to right
        fill(root->right); //call on right
    }
    
    void flatten(TreeNode* root) {
        TreeNode* rc = root;
        fill(rc);
    }
};