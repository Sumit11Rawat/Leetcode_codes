/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
       unordered_map<ListNode*,int>m;
       while(temp!=NULL){
           if(!m[temp]){
               m[temp]++;
               temp=temp->next;
           }
           if(m[temp]){
               return true;
           }
       }
       return false;
    }
};