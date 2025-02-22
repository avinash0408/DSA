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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* l3= nullptr;
       int carry = 0;
       ListNode* tmpA = l1;
       ListNode* tmpB = l2;
        ListNode* tmpC = l3;
       while(tmpA && tmpB){
            int sum = tmpA->val+tmpB->val+carry;
            carry=0;
            if(sum>=10) carry=1;
            sum = sum%10;
            if(l3==nullptr){
                l3 = new ListNode(sum);
                tmpC = l3;
            }else{
                ListNode* tmp = new ListNode(sum);
                tmpC->next = tmp;
                tmpC = tmp;
            }
            tmpA = tmpA->next;
            tmpB = tmpB->next;
       }
       while(tmpA){
            int sum = tmpA->val+carry;
            carry=0;
            if(sum>=10) carry=1;
            sum = sum%10;
            ListNode* tmp = new ListNode(sum);
            tmpC->next = tmp;
            tmpC = tmp;
            tmpA = tmpA->next;
       }
       while(tmpB){
            int sum = tmpB->val+carry;
            carry=0;
            if(sum>=10) carry=1;
            sum = sum%10;
            ListNode* tmp = new ListNode(sum);
            tmpC->next = tmp;
            tmpC = tmp;
            tmpB = tmpB->next;
       }
       if(carry){
            ListNode* tmp = new ListNode(carry);
            tmpC->next = tmp;
       }
       return l3;
    }
};