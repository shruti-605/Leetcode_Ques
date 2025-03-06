class Solution {
public:
    int countNodes(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int ans=1+countNodes(root->left)+countNodes(root->right);
        return ans;
    }
    bool isCBT(TreeNode* root,int index,int cnt){
        if(root==NULL){
            return true;
        }
        if(index>=cnt){
            return false;
        }
        bool left=isCBT(root->left,2*index+1,cnt);
        bool right=isCBT(root->right,2*index+2,cnt);
        return (left && right);
    }
    bool isMaxOrder(TreeNode* root){
        //leaf node
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        //1 node 
        if(root->right==NULL){
            return (root->val > root->left->val);
        }
        bool left=isMaxOrder(root->left);
        bool right=isMaxOrder(root->right);
        return (left && right && root->val>root->left->val && root->val > root->right->val);
    }
    bool isCompleteTree(TreeNode* root) {
        int totalCount = countNodes(root);
        return isCBT(root, 0, totalCount);
    }
};
