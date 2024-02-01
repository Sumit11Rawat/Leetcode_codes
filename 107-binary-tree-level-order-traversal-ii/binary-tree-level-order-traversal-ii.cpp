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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>fans;
        if(root==NULL){
            return fans;
        }
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            vector<int>ans;
            int size=q.size();
           while(size--){
                TreeNode* current=q.front();
                q.pop();
                ans.push_back(current->val);
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
                

            }
            fans.push_back(ans);
        }
        reverse(fans.begin(),fans.end());
        return fans;
    }
};