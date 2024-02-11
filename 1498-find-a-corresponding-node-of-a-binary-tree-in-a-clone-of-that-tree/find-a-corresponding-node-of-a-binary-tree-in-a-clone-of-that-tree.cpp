/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
  
public:

    
TreeNode* chk(TreeNode* original, TreeNode* cloned, TreeNode* target,TreeNode*& ans){
     if(original==NULL){
            return NULL;
        }
        // note we will compare orginal with target to tackle repeated value on tree problem

        if(original==target&&original->val==target->val){
       ans= cloned;
    }
       chk(original->left,cloned->left,target,ans);
        
    
     chk(original->right,cloned->right,target,ans);
   return ans;
}
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       
     TreeNode* ans=NULL;
      return chk(original,cloned,target,ans);
  
 
    }
};