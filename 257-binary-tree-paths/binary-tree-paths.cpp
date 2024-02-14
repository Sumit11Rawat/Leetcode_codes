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
vector<string> chk(TreeNode* root,string s,vector<string>&ans){
    if(root==NULL){
        return {};
    }
    if(root->left==NULL&&root->right==NULL){
       s+=to_string(root->val);
        ans.push_back(s);
    }
    s+=to_string(root->val);
    s+="->";
    chk(root->left,s,ans);
    chk(root->right,s,ans);
    s.pop_back();
    return ans;
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        return chk(root,s,ans);
    }
};