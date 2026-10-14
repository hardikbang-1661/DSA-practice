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
    ListNode* mergeNodes(ListNode* head) {
        struct ListNode* t=head;
        int sum=0;
        while(t){
            if(t->val==0){
                sum=0;
                t=t->next;
            }
            else{
                struct ListNode* c=t;
                while(t->val!=0){
                    sum+=t->val;
                    t=t->next;
                }
                c->val=sum;
                c->next=t;
            }
        }
        head=head->next;
        t=head;
        struct ListNode* c=t;
        while(t){
            if(t->val==0){
                while(t!=NULL && t->val==0) t=t->next;
                c->next=t;
            }
            if(t!=NULL){
                c=t;
                t=t->next;
            }
        }
        return head;
    }
};