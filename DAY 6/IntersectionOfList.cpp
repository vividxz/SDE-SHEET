class Solution {
public:
    int length(ListNode *head){
        int l = 0;
        while(head){
            l++;
            head = head->next;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = length(headA);
        int l2 = length(headB);
        int diff = abs(l1-l2);
        if(l1 > l2){
            while(diff--)
                headA = headA->next;
        }else{
            while(diff--)
                headB = headB->next;
        }
        while(headA != headB){
            if(headA == NULL)
                return NULL;
            if(headB == NULL)
                return NULL;
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }   
};