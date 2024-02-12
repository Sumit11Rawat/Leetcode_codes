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
int find(string s){
    int ans=0;
    int i=0;
    int b=s.size()-1;
    while(i<s.size()){
        ans+=(s[i]-'0')*pow(2,b);
        b--;
        i++;
    }
    return ans;
}
void chk(TreeNode* root,int& ans,string s){
    if(root==NULL){
        return;
    }
    if(root->left==NULL&&root->right==NULL){
        s+=to_string(root->val);
        ans+=find(s);
    
    }
    
    s+=to_string(root->val);
    chk(root->left,ans,s);
   
    
    
  
    chk(root->right,ans,s);
       s.pop_back();
}
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        string s="";
        chk(root,ans,s);
        return ans;
    }
};