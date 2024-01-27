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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        if(count<=1){
            return NULL;
        }
        int i=1;
        temp=head;
        while(i<floor(count/2)){
            temp=temp->next;
            i++;
        }
        ListNode* ftemp=temp->next;
        temp->next=ftemp->next;
        return head;
    }
};