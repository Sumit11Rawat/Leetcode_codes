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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* ftemp=new ListNode();
        ListNode* ptr=ftemp;
        while(temp1&&temp2){
            if(temp1->val<temp2->val){
                ListNode* r=new ListNode(temp1->val);
                ptr->next=r;
                ptr=ptr->next;
                temp1=temp1->next;
            }
            else{
                ListNode* r=new ListNode(temp2->val);
                ptr->next=r;
                ptr=ptr->next;
                temp2=temp2->next;
            }
        }
        while(temp1){
             ListNode* r=new ListNode(temp1->val);
                ptr->next=r;
                ptr=ptr->next;
                temp1=temp1->next;
        }
        while(temp2){
          ListNode* r=new ListNode(temp2->val);
                ptr->next=r;
                ptr=ptr->next;
                temp2=temp2->next;  
        }
        return ftemp->next;
    }
};