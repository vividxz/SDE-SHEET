class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, int> freq;
        while(headA){
            freq[headA]++;
            headA = headA->next;
        }
        while(headB){
            freq[headB]++;
            headB = headB->next;
        }
        for(auto it : freq){
            if(it.second > 1)
                return it.first;
        }
        return NULL;
    }
};