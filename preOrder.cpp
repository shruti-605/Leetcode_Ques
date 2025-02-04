class Solution {
public:
     void find(TreeNode* node,vector<int> &ans){
        if(node==NULL) return;
        ans.push_back(node->val);
        find(node->left,ans);
        find(node->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        find(root,ans);
        return ans;
    }
};
