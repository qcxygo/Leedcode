typedef struct{
int *data;
int head,tail;
int size,cnt;
}myqueue;
myqueue *initqueue(int size){
    myqueue *m=(myqueue*)malloc(sizeof(myqueue));
   m->data=(int *)malloc(size*sizeof(int));
    m->tail=m->head=m->cnt=0;
    m->size=size;
    return m;
}
void mypush(myqueue * obj,int x){if(obj==NULL)return ;
if(obj->cnt==obj->size)return ;
obj->data[obj->tail++]=x;
if(obj->tail==obj->size){
    obj->tail-=obj->size;
}
obj->cnt+=1;
return ;
}
int mypop(myqueue *obj){

if(obj==NULL)return 0;
if(obj->cnt==0)return 0;
obj->head+=1;
if(obj->head==obj->size){
    obj->head-=obj->size;
}
obj->cnt-=1;
return 1;

}
int myfront(myqueue *obj){
    return obj->data[obj->head];
}
int myempty(myqueue *obj){
    return (obj->cnt==0);
}
void myfree(myqueue *obj){
    if(obj==NULL) return ;
    free(obj->data);
    free(obj);
    return ;
}
typedef struct {
myqueue *q1,*q2;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
int size=1024;
MyStack *s=(MyStack*)malloc(sizeof(MyStack));
s->q1=initqueue(size);
s->q2=initqueue(size);
return s;

}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
if(!myempty(obj->q1))
mypush(obj->q1,x);
else
mypush(obj->q2,x);
return ;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
myqueue *p=myempty(obj->q1)?obj->q2:obj->q1;
myqueue *q=myempty(obj->q1)?obj->q1:obj->q2;
int element=myfront(p);
mypop(p);
while(!myempty(p)){
mypush(q,element);
element=myfront(p);
mypop(p);
}
return element;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
myqueue *p=myempty(obj->q1)?obj->q2:obj->q1;
myqueue *q=myempty(obj->q1)?obj->q1:obj->q2;
int element;

while(!myempty(p)){
element=myfront(p);
mypop(p);
mypush(q,element);
}

return element;
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
  
 return myempty(obj->q1) && myempty(obj->q2);
}

void myStackFree(MyStack* obj) {
if(obj==NULL)
return ;

myfree(obj->q1);
myfree(obj->q2);
free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
