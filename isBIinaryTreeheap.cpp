int countNodes(struct Node* root){
    if(root==NULL){
        return 0;
    }
    int ans=1+countNodes(root->left)+countNodes(root->right);
    return ans;
}
bool isCBT(struct Node* root,int index,int cnt){
    if(root==NULL){
        return true;
    }
    if(index>=cnt){
        return false;
    }
    bool left=isCBT(root->left,2*index+1,cnt);
    bool right=isCBT(root->right,2*index+2,cnt);
    return (left&& right);
}
bool isMaxOrder(struct Node* root){
    //leaf no child exist
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    //having one 1 child
    if(root->right==NULL){
        return(root->data>root->left->data);
    }
    bool left=isMaxOrder(root->left);
    bool right=isMaxOrder(root->right);
    return(left && right && root->data > root->left->data && root->data> root->right->data);
    
}
class Solution {
  public:
    bool isHeap(struct Node* tree) {
        // code here
        int index=0;
        int totalCount=countNodes(tree);
        if(isCBT(tree,index,totalCount)&& isMaxOrder(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};
