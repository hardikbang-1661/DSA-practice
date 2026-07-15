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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<lists.size();i++){
            struct ListNode* head=lists[i];
            while(head!=NULL){
                pq.push(head->val);
                head=head->next;
            }
        }
        struct ListNode* ans=NULL;
        struct ListNode* check=NULL;
        if(!pq.empty()){
            check=new ListNode(pq.top());
            check->val=pq.top();
            check->next=NULL;
            ans=check;
            pq.pop();
        }
        while(!pq.empty()){
            struct ListNode* temp=new ListNode(pq.top());
            temp->val=pq.top();
            temp->next=NULL;
            pq.pop();
            check->next=temp;
            check=check->next;
        }
        return ans;
    }
};