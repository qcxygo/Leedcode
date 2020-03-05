void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void merge_sort(int *data,int l,int r){
    if(l==r){
        return;
    }
    int mid=(l+r)/2;
    merge_sort(data,l,mid);
    merge_sort(data,mid+1,r);
    int temp [r-l+1];
    int x=l ,y=mid+1,loc=0;
    while(x<=mid||y<=r){
    if(x<=mid&&(y>r||data[x]<=data[y])){
        temp[loc]=data[x];
        x++;
}    
        else{
            temp[loc]=data[y];
            y++;
        }
        loc++;
    }
    for(int i=l;i<=r;i++){
        data[i]=temp[i-l];
    }
}

bool containsDuplicate(int* nums, int numsSize){
    if(numsSize==0)
    return false;
merge_sort(nums,0,numsSize-1);
for(int i=0;i<numsSize-1;i++)
{
    if(nums[i]==nums[i+1])
    return true;
}
return false;
}
