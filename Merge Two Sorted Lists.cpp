/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* list=&dummy;
    dummy.next=NULL;
    while(list1!=NULL && list2!=NULL)
    {
        if(list1->val<=list2->val)
        {
            list->next=list1;
            list1=list1->next;
           
        }
        else
        {
            list->next=list2;
            list2=list2->next;
            
        }
        list=list->next;
    }
    while(list1!=NULL)
    {
        list->next=list1;
            list1=list1->next;
          list=list->next;
    }
    while(list2!=NULL)
    {
         list->next=list2;
            list2=list2->next;
           list=list->next;
    }
    return dummy.next;
}
