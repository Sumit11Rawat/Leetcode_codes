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
int length(ListNode* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // brute force -using hashmap

    //     unordered_map<ListNode*,int>m;
    //     ListNode* temp=headA;
    //     while(temp!=NULL){
    //         m[temp]++;
    //         temp=temp->next;
    //     }
       
    //    temp=headB;
    //    ListNode* ftemp=NULL;
    //    while(temp!=NULL){
    //        if(m[temp]){
    //            ftemp=temp;
    //            break;

    //        }
    //        else{
    //            temp=temp->next;
    //        }
    //    }
    //    return ftemp;

    // optimal approach
    ListNode* temp=NULL;
       int len1=length(headA);
       int len2=length(headB);
       if(len1>len2){
           while(len1>len2){
               headA=headA->next;
               len1--;
           }
       }
       else{
           while(len2>len1){
               headB=headB->next;
               len2--;
           }
       }
       while(headA!=NULL&&headB!=NULL){
             if(headA==headB){
                 temp=headA;
                 break;
             }
             else{
                 headA=headA->next;
                 headB=headB->next;
             }
       }
       return temp;
       
    }
};