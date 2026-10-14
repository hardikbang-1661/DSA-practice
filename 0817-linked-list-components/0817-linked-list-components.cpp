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
    int numComponents(ListNode* head, vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        int curr=0;
        int t=0;
        while(head){
            int x=head->val;
            auto it=s.find(x);
            if(it!=s.end()) curr++;
            else{
                if(curr!=0)
                    t++;
                curr=0;
            }
            head=head->next;
        }
        if(curr) t++;
        return t;
    }
};