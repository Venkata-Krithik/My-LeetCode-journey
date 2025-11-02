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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int> m;
        while(temp!=NULL){m.push_back(temp->val);temp=temp->next;}
        int n=m.size();
        for(int i=0;i<(n+1)/2;i++)
        {
            if(m[n-i-1]!=m[i]) return false;
        }
        return true;
    }
};
