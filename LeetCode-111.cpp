/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    
if(root==NULL)return 0;
if(root->left==NULL&&root->right==NULL)
return 1;
if(root->left==NULL&&root->right!=NULL)
return minDepth(root->right)+1;
if(root->right==NULL&&root->left!=NULL)
return minDepth(root->left)+1;

int l=minDepth(root->left)+1;
int r=minDepth(root->right)+1;
if(l>r)
return r;
else
return l;
}
