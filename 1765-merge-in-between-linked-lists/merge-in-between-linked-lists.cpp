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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        ListNode* pre=list1,*curr=list1;
        for(int i=0;i<a-1;i++){
            pre=pre->next;
        }
        for(int i=0;i<=b;i++){
            curr=curr->next;
        }
        ListNode * t=list2;
        while(t->next){
            t=t->next;
        }
        pre->next=list2;
        t->next=curr;
        return list1;
    }
};