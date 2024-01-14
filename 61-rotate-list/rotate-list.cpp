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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int count=0;
        while(temp->next!=NULL){
               temp=temp->next;
               count++;
        }
        count++;
        if(k==count){
            k=0;
        }
        if(k>count){
            k=k%count;
        }
        temp->next=head;
        temp=head;
        for(int i=0;i<count-k-1;i++){
           temp=temp->next;
        }
        ListNode* fhead=temp->next;
        temp->next=NULL;
        return fhead;

    }
};