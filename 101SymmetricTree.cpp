class Solution {
public:
    bool isSym(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val != q->val) return false;
        if(isSym(p->left,q->right)==false) return false;
        if(isSym(p->right,q->left)==false) return false;
        return true;
    }   
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSym(root->left,root->right);

    }
};
