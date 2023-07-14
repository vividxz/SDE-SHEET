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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode *curr = head;
        while(curr){
            curr = curr->next;
            length++;
        }

        int pos =  length - n - 1;
        if(pos<0){
            ListNode *temp = head;
            head = head->next;
            delete(temp);
            return head;
        }
        curr = head;
        while(pos > 0){
            curr = curr->next;
            pos --;
        }
        ListNode *temp = curr->next;
        curr->next = curr->next->next;
        delete(temp);
        return head;
    }
};