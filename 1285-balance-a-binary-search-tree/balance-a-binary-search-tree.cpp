/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>arr;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    // build a balance tree
    TreeNode* build(int s,int e){
        if(s>e) return NULL;
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=build(s,mid-1);
        root->right=build(mid+1,e);
        return root;

    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return build(0,arr.size()-1);
        
    }
};