/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int temp=0;
    bool carry=false;
    struct ListNode* L1=l1;
    struct ListNode* L2=l2;
    bool returnL1=false;
    bool returnL2=false;

    while(L1!=NULL && L2!=NULL)
    {
        if(!carry) temp=L1->val+L2->val;
        else temp=L1->val+L2->val+1;
        L1->val=temp%10;
        L2->val=temp%10;
        if(temp>=10) carry=true;
        else carry=false;
        L1=L1->next;
        L2=L2->next;
    }

    while(L1!=NULL)
    {
        returnL1=true;
        if(!carry) temp=L1->val;
        else temp=L1->val+1;
        L1->val=temp%10;
        if(temp>=10) carry=true;
        else carry=false;
        L1=L1->next;
    }

    while(L2!=NULL)
    {
        if(!carry) temp=L2->val;
        else temp=L2->val+1;
        L2->val=temp%10;
        if(temp>=10) carry=true;
        else carry=false;
        L2=L2->next;
    }

    if(returnL1 && carry) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = 1;
        newNode->next = NULL;
        struct ListNode* t = l1;
        while(t->next != NULL) t = t->next;
        t->next = newNode;
        return l1;
    }
    else if(carry) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = 1;
        newNode->next = NULL;
        struct ListNode* t = l2;
        while(t->next != NULL) t = t->next;
        t->next = newNode;
        return l2;
    }
    else if(returnL1) return l1;
    else return l2;
}
