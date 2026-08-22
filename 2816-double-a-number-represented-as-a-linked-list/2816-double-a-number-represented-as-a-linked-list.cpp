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
    ListNode* doubleIt(ListNode* head) {
        stack<int> stk;
        ListNode* check=head;
        while(check){
            stk.push(check->val*2);
            check=check->next;
        }
        check=head;
        vector<int> vec;
        int carry=0;
        while(!stk.empty()){
            int x=stk.top();
            stk.pop();
            int digit=(x%10)+carry;
            if(digit>=10){
                digit-=10;
                carry=1;
            }
            else{
                carry=x/10;
            }
            vec.push_back(digit);
        }
        if(carry)
            vec.push_back(carry);
        check=head;
        reverse(vec.begin(),vec.end());
        int idx=0;
        while(idx!=vec.size()){
            if(check==NULL){
                check=new ListNode(vec[idx++]);
            }
            else{
                check->val=vec[idx++];
            }
            if(idx<vec.size()){
                if(check->next==NULL)
                    check->next=new ListNode();
                check=check->next;
            }
        }
        return head;
    }
};