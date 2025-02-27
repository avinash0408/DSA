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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr) return list2;
        if(list2==nullptr) return list1;
        ListNode* dum = new ListNode();
        ListNode* cur = dum;
        while(list1 && list2){
            ListNode* tmp = nullptr;
            if(list1->val<=list2->val){
                tmp = new ListNode(list1->val);
                list1 = list1->next;
            }else{
                tmp = new ListNode(list2->val);
                list2 = list2->next;
            }
            cur->next = tmp;
            cur = tmp;
        }
        cur->next = list1 ? list1:list2;
        return dum->next;
    }
};
