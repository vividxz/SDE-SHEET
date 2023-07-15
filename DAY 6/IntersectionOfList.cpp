class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode *dummy;
        while(headA){
            dummy = headB;
            while(dummy){
            if(dummy == headA)
                return headA;
            dummy = dummy->next;
            }
            headA = headA->next;
        }
    return NULL;
    }   
};