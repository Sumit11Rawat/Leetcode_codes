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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>fans;
     
        if(root==NULL){
            return fans;
        }
        queue<TreeNode*>q;
        int j=0;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            j++;
               vector<int>ans;
            for(int i=0;i<size;i++){
                TreeNode* current=q.front();
                q.pop();
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
                ans.push_back(current->val);
            }
            if(j%2==0){
                reverse(ans.begin(),ans.end());
            }
            fans.push_back(ans);
        }
        return fans;
    }
};