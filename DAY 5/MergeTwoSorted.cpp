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
        ListNode *ddummy  = NULL, *dummy = NULL, *l1 = list1, *l2 = list2;
        while(l1!=NULL && l2!=NULL){
            ListNode *temp = new ListNode();
            if(l1->val < l2->val){
                temp->val = l1->val;
                temp->next = NULL;
                l1 = l1->next;
            }
            else{
                temp->val = l2->val;
                temp->next = NULL;
                l2 = l2->next;
            }
            
            if(ddummy == NULL){
                ddummy = temp;
                dummy = ddummy;
            }
                
            else{
                ddummy->next = temp;
                ddummy = ddummy->next;
            }
        }
        if(l1 == NULL){
            while(l2!=NULL){
                ListNode *temp = new ListNode();
                temp->val = l2->val;
                temp->next = NULL;
                l2 = l2->next;
                if(ddummy == NULL){
                    ddummy = temp;
                    dummy = ddummy;
                }
                else{
                    ddummy->next = temp;
                    ddummy = ddummy->next;
                }
            }
        }
        if(l2 == NULL){
            while(l1!=NULL){
                ListNode *temp = new ListNode();
                temp->val = l1->val;
                temp->next = NULL;
                l1 = l1->next;
                if(ddummy == NULL){
                    ddummy = temp;
                    dummy = ddummy;
                }
                else{
                    ddummy->next = temp;
                    ddummy = ddummy->next;
                }
            }
        }
    
        return dummy;

    }
};