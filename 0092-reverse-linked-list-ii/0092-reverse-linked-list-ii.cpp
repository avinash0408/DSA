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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       if(!head->next) return head;
       int count=0;
       ListNode* dum = new ListNode(-1);
       dum->next = head;
       ListNode* cend = dum;
       while(count<left-1){
            count++;
            cend = cend->next;
       }
       ListNode* cur = cend->next;
       ListNode* nxt = nullptr;
       ListNode* tmp = nullptr;
       for(int i=0;i<right-left;i++){
            nxt = cur->next;
            cur->next = nxt->next;
            nxt->next = cend->next;
            cend->next = nxt; 

       }
       return dum->next;;
    }
};