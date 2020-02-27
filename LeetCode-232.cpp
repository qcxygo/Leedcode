typedef struct stack{
    int *data;
    int top;
}stack;
typedef struct MyQueue{
stack s1,s2;
} MyQueue;

/** Initialize your data structure here. */

MyQueue* myQueueCreate() {
MyQueue *obj=(MyQueue*)malloc(sizeof(MyQueue));
obj->s1.data=(int*)malloc(sizeof(int)*1000);
obj->s2.data=(int*)malloc(sizeof(int)*1000);
obj->s1.top=-1;
obj->s2.top=-1;
return obj;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
if(obj->s1.top<1000){
    while(obj->s1.top>-1){
        obj->s2.data[++obj->s2.top]=obj->s1.data[obj->s1.top--];
    }
    obj->s1.top++;
    obj->s1.data[obj->s1.top]=x;
    while(obj->s2.top>-1){
        obj->s1.data[++obj->s1.top]= obj->s2.data[obj->s2.top--];
    }
}
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
if(obj->s1.top!=-1){
    return obj->s1.data[obj->s1.top--];
}
return 0;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
if(obj->s1.top!=-1){
    int front =obj->s1.data[obj->s1.top];
    return front;
}
return 0;
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {

return (obj->s1.top==-1);
}

void myQueueFree(MyQueue* obj) {
free(obj->s1.data);
free(obj->s2.data);
free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
