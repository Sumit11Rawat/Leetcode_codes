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
    int getDecimalValue(ListNode* head) {
        string ans="";
        while(head!=NULL){
            ans+=to_string(head->val);
            head=head->next;
        }
        int temp=0;
        int n=ans.size();
        int i=0;
        int j=n-1;
        while(i<n&&j>=0){
           temp=temp+pow(2,i)*(int(ans[j])-48);
           i++;
           j--;
        }
        return temp;
    }
};