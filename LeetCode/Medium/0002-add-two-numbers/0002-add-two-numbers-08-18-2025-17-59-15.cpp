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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0,NULL);
        ListNode* p=l3;
        int add=0;
        while(l1!=NULL||l2!=NULL){
            int a=add;
            if (l1 != nullptr) {
                a += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                a += l2->val;
                l2 = l2->next;
            }
            add=a/10;
            p->next= new ListNode(a%10,NULL);
            p=p->next;
            
        }
        if(add>0){
            p->next=new ListNode(add,NULL);
        }
        return l3->next;
    }
};