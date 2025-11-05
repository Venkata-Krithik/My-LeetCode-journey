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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* prev = nullptr;
        ListNode* temp = head;
        head = head->next;  
        while (temp && temp->next)
        {
            ListNode* temp1 = temp->next;
            temp->next = temp1->next;
            temp1->next = temp;
            if (prev) prev->next = temp1;
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};
