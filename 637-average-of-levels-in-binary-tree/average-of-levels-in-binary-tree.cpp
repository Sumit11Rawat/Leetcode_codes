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
    vector<double> averageOfLevels(TreeNode* root) {
          
       vector<double>fans;
         vector<int>ans;  
        if(root==NULL){
            return {};

        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
              
                 ans.clear();
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
            double avg=0;
            for(int i=0;i<ans.size();i++){
                avg+=ans[i];
            }
            
            fans.push_back((double)avg/(double)ans.size());
        }
        return fans;
    }
};