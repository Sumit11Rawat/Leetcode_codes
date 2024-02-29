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
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>fans;
        vector<int>ans;
        vector<vector<int>>ftemp;
        vector<int>temp;
        if(root==NULL){
            return true;
        }
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            i++;
          int size=q.size();
          for(int j=0;j<size;j++){
              TreeNode* current=q.front();
              q.pop();
              if(current->left){
                  q.push(current->left);
              }
              if(current->right){
                  q.push(current->right);
              }
              if(i%2==0){
                  temp.push_back(current->val);
              }
              else{
                  ans.push_back(current->val);
              }
          }
          ftemp.push_back(temp);
          fans.push_back(ans);
       ans.clear();
       temp.clear();
        }
        for(int i=0;i<ftemp.size();i++){
            for(int j=0;j<ftemp[i].size();j++){
                
                if(ftemp[i][j]%2!=0){
                    return false;
                }
            }
        }
        for(int i=0;i<ftemp.size();i++){
            for(int j=1;j<ftemp[i].size();j++){
                  if(ftemp[i][j-1]<=ftemp[i][j]){
                      return false;
                  }
            }
        }
        for(int i=0;i<fans.size();i++){
            for(int j=0;j<fans[i].size();j++){
                
                if(fans[i][j]%2==0){
                    return false;
                }
            }
        }
         for(int i=0;i<fans.size();i++){
            for(int j=1;j<fans[i].size();j++){
                  if(fans[i][j-1]>=fans[i][j]){
                      return false;
                  }
            }
        }

     return true;
    }
};