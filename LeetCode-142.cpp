/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
   struct ListNode *p,*q;
   p=q=head;
   if(p==NULL)
   return NULL;
    while(1){

        p=p->next;
        q=q->next;
        if(p==NULL||q==NULL)
        return NULL;
        q=q->next;
         if(p==NULL||q==NULL)
         return NULL;
         if(p==q)
         break;

    }
    int w=0;
    p=q->next;
    while(p!=q){
        p=p->next;
        w++;
    }
    w+=1;
    p=q=head;
    for(int i=0;i<w;i++)
    p=p->next;
    while(p!=q){
        p=p->next;
        q=q->next;
    }
    return p;

}
