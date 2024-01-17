/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* fftemp=temp;
            ListNode* ftemp=temp;
            int maxi=0;
            while(ftemp!=NULL){
                if(ftemp->val>fftemp->val){
                    maxi=ftemp->val;
                    break;
                }
                else{
                    ftemp=ftemp->next;
                }
            }
            ans.push_back(maxi);
            temp=temp->next;
        }
        return ans;
    }
};