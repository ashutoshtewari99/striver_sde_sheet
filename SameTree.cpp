class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL || q==NULL)
            return false;
        if(p->val != q->val)
            return false;
        return isSameTree(p->left,q->left) && isSameTree( p->right, q->right);
    }
};

//faster than 100%
class Solution {
/* public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p==NULL || q==NULL)
            return (p==q);
        
        return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree( p->right, q->right);
    }
}; 
shift+option + A = multiline comment
*/