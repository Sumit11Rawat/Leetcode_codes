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
int chk(TreeNode* root,int &sum,TreeNode* rooot){
     if(root==NULL){
            return 0;
        }
    
        if(root->left==NULL&&root->right==NULL){
            if(rooot->left==root){
            sum+=root->val;
            }
        }
        chk(root->left,sum,root);
        chk(root->right,sum,root);
        return sum;
}
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        return chk(root,sum,root);
    }
};