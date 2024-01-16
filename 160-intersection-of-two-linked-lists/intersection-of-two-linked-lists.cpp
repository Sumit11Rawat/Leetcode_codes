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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>m;
        ListNode* temp=headA;
        while(temp!=NULL){
            m[temp]++;
            temp=temp->next;
        }
       
       temp=headB;
       ListNode* ftemp=NULL;
       while(temp!=NULL){
           if(m[temp]){
               ftemp=temp;
               break;

           }
           else{
               temp=temp->next;
           }
       }
       return ftemp;
    }
};