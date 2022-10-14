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
         if(head->next==NULL)return 0;
       ListNode *t1=head;
        int n=0;
        while(t1!=NULL){
            n++;
            t1=t1->next;
        }
       t1=head;
       
        for(int i=0;i<n/2-1;i++){
           t1=t1->next;
        }
        
        t1->next=t1->next->next;
        return head;
    }
};