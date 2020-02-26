/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *a=headA;
    while(headB!=NULL)
    {a=headA;
        while(a!=NULL){
            if(a==headB)
            return a;
            a=a->next;
        }
        headB=headB->next;
    }
    a=NULL;
    return a;
}
