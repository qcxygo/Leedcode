/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head==NULL)
    return NULL;
    struct ListNode *p,*q;
    p=q=head;
    while(1){
        p=p->next;
        q=q->next;
if(p==NULL||q==NULL)
return false;
q=q->next;
if(q==NULL)
return false;
if(p==q)
return true;
    }
    
}
