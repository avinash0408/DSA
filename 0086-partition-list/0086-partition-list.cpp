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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = NULL;
        ListNode* large = NULL;
        if(head==nullptr) return small;
        ListNode* tmp = new ListNode(head->val);
        if(head->val<x){
            small = tmp;
        }
        else
            large = tmp;
        
        ListNode *move = head->next;
        ListNode *sm = small;
        ListNode *lm = large;
        while(move){
            ListNode* d = new ListNode(move->val);
            if(d->val<x){
                if(small==nullptr) {
                    small = d;
                    sm = d;
                }
                else{
                    sm->next = d;
                    sm = sm->next;
                }
            }
            else{
                if(large==nullptr) {
                    large = d;
                    lm=d;
                }
                else{
                    lm->next = d;
                    lm = lm->next;
                }
            }
            move = move->next;
        }
        if(sm)
            sm->next = large;
        return small!=nullptr ? small : large;     
    }
};