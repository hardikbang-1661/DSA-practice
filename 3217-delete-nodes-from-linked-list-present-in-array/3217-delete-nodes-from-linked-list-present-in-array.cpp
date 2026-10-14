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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        struct ListNode* prev=NULL;
        struct ListNode* curr=head;
        while(curr){
            int x=curr->val;
            auto it=s.find(x);
            if(it!=s.end()){
                if(prev==NULL){
                    curr=curr->next;
                    head=head->next;
                }
                else{
                    curr=curr->next;
                    prev->next=curr;
                }
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};