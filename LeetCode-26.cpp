int removeDuplicates(int* nums, int numsSize){
    if (numsSize<=1)
    return numsSize;
int a=numsSize,b=0;
for(int i=0;i<numsSize-1;i++){
    if(nums[i]==nums[i+1])
    {
        a--;}
        else{
            nums[b]=nums[i];
            b++;
        }
}

    nums[b]=nums[numsSize-1];

return a;
}
