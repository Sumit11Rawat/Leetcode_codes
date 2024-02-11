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
void chk(TreeNode* root,string& s){
    
   if(root->left==NULL&&root->right==NULL){
       s+=root->val;
      return ;
   }
   if(root->left){
    chk(root->left,s);
   }
   if(root->right){
    chk(root->right,s);
   }
    
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1="";
        chk(root1,s1);
        string s2="";
        chk(root2,s2);
        return s1==s2;
    }
};