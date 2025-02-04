class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL ) return p==q;
        if(p->val !=  q->val) return false;
        if (isSameTree( p->left, q->left)== false) return false;
        if(isSameTree( p->right, q->right) == false) return false;
        return true;
    }
};
