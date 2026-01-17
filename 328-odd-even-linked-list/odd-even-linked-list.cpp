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
    ListNode* oddEvenList(ListNode* head) {
        //2-1-3-5-6-4-7=o-e-o-e-o-e-o

        if(head==NULL) return head;
        ListNode* odd=head;//2
        ListNode* even=head->next;//1
        ListNode* evenHead=even;//1

        while(even!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;

            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;

    }
};