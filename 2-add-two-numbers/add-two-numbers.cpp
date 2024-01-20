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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr=new ListNode();
        ListNode* finans=ptr;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        
        int carry=0;
         long long fans=0;
        while(temp1!=NULL||temp2!=NULL||carry!=0){
            
            int ans=0;
            ans+=carry;
            if(temp1!=NULL){
                ans+=temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=NULL){
                ans+=temp2->val;
                 temp2=temp2->next;
            }
           
       
            if(ans<=9){
                carry=0;
            }
            else{
          carry=ans/10;
          ans=ans%10;
            }
            
            
            ListNode* r=new ListNode(ans);
            finans->next=r;

            finans=finans->next;
            
           
            
        }
        return ptr->next;
        
    }
};