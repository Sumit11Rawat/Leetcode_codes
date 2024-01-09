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
    ListNode* removeElements(ListNode* head, int d) {
       
        while(head!=NULL&&head->val==d){
            head=head->next;
        }
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp&&temp->next){
                   
            if(temp->next->val==d){
                temp->next=temp->next->next;
                
            }
            else{
                // prev=temp->val;
                temp=temp->next;
            }
            
        }
        return head;
    }
};