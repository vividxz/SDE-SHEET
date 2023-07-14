class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val1, val2, sum=0, carry = 0;
        ListNode *curr=NULL, *head=NULL;
        while(l1 || l2){
            if(l1 == NULL)
                val1 = 0;
            else
                val1 = l1->val;

            if(l2 == NULL)
                val2 = 0;
            else
                val2 = l2->val;

            sum = val1 + val2 + carry;

            if(sum > 9){
                sum %= 10;
                carry = 1;
            }else
                carry = 0;

            ListNode *node = new ListNode(sum);
            node->next = NULL;
            if(curr == NULL){
                curr = node;
                head = node;
            }
            else{
                curr->next = node;
                curr = node;
            }

            if(l1 == NULL)
                l2 = l2->next;
            else if(l2 == NULL)
                l1 = l1->next;
            else{
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        if(carry>0){
            ListNode *node = new ListNode(carry);
            node->next = NULL;
            curr->next = node;
            curr = node;
        }
        curr->next = NULL;
        
        return head; 
    }
};