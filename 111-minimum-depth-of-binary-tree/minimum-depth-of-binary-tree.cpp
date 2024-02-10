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
// int height(TreeNode* root){
//     if(root==NULL){
//         return 0;
//     }
//     return min(height(root->right),height(root->right))+1;
// }
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL&&root->right==NULL){
            return 1;
        }
        long left,right;
        if(root->left){
         left=minDepth(root->left);
        }
        else{
            left=INT_MAX;
        }
        if(root->right){
         right=minDepth(root->right);
        }
        else{
            right=INT_MAX;
        }
        return min(left,right)+1;
    }
};