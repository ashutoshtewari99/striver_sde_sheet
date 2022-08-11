class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* curr = root;
        int c = 0;
        int ans;
        while(curr != NULL){
            if(curr->left == NULL){
                c++;
                if(c == k) ans = curr->val;
                curr = curr->right;
            }
            else{
                TreeNode* prev = curr->left;
                while(prev->right != NULL && prev->right != curr){
                    prev = prev->right;
                }
                if(prev->right == NULL){
                    prev->right = curr;
                    curr = curr->left;
                }
                else if(prev->right == curr){
                    c++;
                    if(c == k) ans = curr->val;
                    prev->right = NULL;
                    curr = curr->right;
                }
            }
        }
        return ans;
    }
};