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
// int ans=0;
void chk(TreeNode* root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    
    
    chk(root->left,ans);
    ans.push_back(root->val);
    chk(root->right,ans);
  

}
    int minDiffInBST(TreeNode* root) {
        
    vector<int>ans;
     chk(root,ans);
     int fans=INT_MAX;
     sort(ans.begin(),ans.end());
     for(int i=0;i<ans.size();i++){
         for(int j=i+1;j<ans.size();j++){
         if(abs(ans[i]-ans[j])<fans){
             fans=abs(ans[i]-ans[j]);
         }
         }
     }
     return fans;
    }
};