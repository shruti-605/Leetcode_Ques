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
    int find(TreeNode* node){
        if(node==NULL){
            return true;// height of tree is 0
        }
        int left=find(node->left);//leftsubtree height
        int right=find(node->right);//rightsubtree height

        if(abs(left-right)>1) return -1;// diff of height of left and right subtree less than 1 if more than 1 then unbalanced
        if(left==-1 || right==-1 ) return -1; //unbalanced tree

        return 1 + max(left,right);
    }
    bool isBalanced(TreeNode* root) {
       int val=find(root);//check teh height and balanced tree
       return (val!=-1);//-1 the tree is unbalanced 
    }
};