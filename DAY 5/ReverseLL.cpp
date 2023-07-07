class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *prev=NULL;
        ListNode *current=head;
        ListNode *ahead=current->next;
            while(current!=NULL){
                current->next=prev;
                prev = current;
                current = ahead;
                if(ahead!=NULL)
                   ahead = ahead->next;
            }
        return prev;
    }
};