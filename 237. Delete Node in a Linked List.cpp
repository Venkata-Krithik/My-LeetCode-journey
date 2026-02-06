/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr=node;
        if(curr->next!=NULL) 
        {
        ListNode* right=curr->next;
        while(right->next!=NULL)
        {
            curr->val=right->val;
            curr=curr->next;
            right=right->next;
        }
        curr->val=right->val;
        curr->next=NULL;
        }
        
    }
};
