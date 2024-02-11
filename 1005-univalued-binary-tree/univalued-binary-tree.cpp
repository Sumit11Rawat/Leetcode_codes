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
bool chk(TreeNode* root,int a){
    if(root==NULL){
        return true;
    }
    if(root->val!=a){
        return false;
    }
    return chk(root->left,a)&&chk(root->right,a);

}
    bool isUnivalTree(TreeNode* root) {
        int a=root->val;
        return chk(root,a);
    }
};