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
typedef ListNode node;
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* it = head;
        ListNode* prevEnd = dummy;
        while(it){
            int count =0;
            ListNode* tmp = it;
            while(tmp){
                count++;
                tmp = tmp->next;
            }
            if(count<k) break;
            ListNode* cur = it;
            ListNode* prev = nullptr;
            for(int i=0;i<k;i++){
                ListNode* nxt = cur->next;
                cur->next = prev;
                prev = cur;
                cur = nxt;
            }
            it->next = cur;
            prevEnd->next = prev;

            prevEnd = it;
            it = cur;
        }
        return dummy->next;
    }
};