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
    ListNode *detectCycle(ListNode *head) {
        ListNode* ans=NULL;
        unordered_map<ListNode*,ListNode*>m;
        ListNode* temp=head;
        int ind=0;
        while(temp!=NULL){
            if(!m[temp]){
                 m[temp]=temp;
                temp=temp->next;
               
            }
            else{
              ans= m[temp];
              break;
            }
           ind++;
        }
        return ans;
    }
};