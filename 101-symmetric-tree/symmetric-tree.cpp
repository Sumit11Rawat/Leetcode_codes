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
bool chk(TreeNode* lefty,TreeNode* righty){
    if(!lefty&&!righty){
        return true;
    }
    if(!lefty||!righty){
        return false;
    }
    if(lefty->val!=righty->val){
        return false;
    }
    return chk(lefty->left,righty->right)&&chk(lefty->right,righty->left);

}
    bool isSymmetric(TreeNode* root) {
           return chk(root->left,root->right);
    }
};