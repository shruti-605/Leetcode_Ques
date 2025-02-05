  int find(TreeNode* node,int &diameter){
        if(node==NULL){
            return 0;
        }
        int left=find(node->left,diameter);
        int right=find(node->right,diameter);
        //update the diameter
        diameter=max(diameter,left+right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root){
        if(!root) return 0;
        int ans=0;
        int height=find(root,ans);
        return ans;
    }

    
};
