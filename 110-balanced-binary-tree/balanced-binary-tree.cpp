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
int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int lefty=height(root->left);
        int righty=height(root->right);
        if(abs(lefty-righty)>1){
            return false;
        }
       isBalanced(root->left);
       if(isBalanced(root->left)==false){
           return false;
       }
       isBalanced(root->right);
       if(isBalanced(root->right)==false){
           return false;
       }
            
        
return true;
        
    }
};