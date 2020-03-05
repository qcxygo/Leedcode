/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int getpath(struct TreeNode *root){
     if(root==NULL)return 0;
     if(root->left==NULL&&root->right==NULL)return 1;
     return getpath(root->left)+getpath(root->right);
 }
 int getresult(struct TreeNode *root,int len,int k,char ** ret,char *buff){if(root==NULL) return 0;
 len+=sprintf(buff+len,"%d",root->val);
 buff[len]=0;
 if(root->left==NULL&&root->right==NULL){
     ret[k]=strdup(buff);
     return 1;
 }
len+=sprintf(buff+len,"->");
int cnt=getresult(root->left,len,k,ret,buff);
cnt+=getresult(root->right,len,k+cnt,ret,buff);
return cnt;
 }
char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
int path=getpath(root);
char **ret=(char**)malloc(sizeof(char*)*path);
int max_len =1024;
char *buff =(char*)malloc(sizeof(char)*max_len);
getresult(root,0,0,ret,buff);
*returnSize=path;
return ret;
}
