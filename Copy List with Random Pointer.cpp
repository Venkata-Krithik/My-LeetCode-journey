/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
    if(head==NULL) return NULL;
    struct Node* copy=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=copy;
    struct Node* temp2=copy;
    struct Node* HEAD=head;
    temp->val=head->val;
    if(HEAD->next==NULL)
    {
        copy->next=NULL;
        copy->random = (head->random ? copy : NULL);
        return copy;
    }
    else HEAD=HEAD->next;
    while(HEAD!=NULL)
    {
        struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
        temp1->val=HEAD->val;
        temp->next=temp1;
        temp=temp->next;
        temp->next=NULL;
        temp->random=NULL;
        HEAD=HEAD->next;
    }
    temp=copy;
    temp2=copy;
    HEAD=head;
    while (HEAD != NULL)
{
    if (HEAD->random != NULL)
    {
        struct Node* findOrig = head;
        struct Node* findCopy = copy;
        while (findOrig != HEAD->random) {
            findOrig = findOrig->next;
            findCopy = findCopy->next;
        }
        temp2->random = findCopy;
    }
    else
    {
        temp2->random = NULL;
    }

    HEAD = HEAD->next;     
    temp2 = temp2->next;   
}
    return copy;
}
