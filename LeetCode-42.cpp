int trap(int* height, int heightSize){
    if(heightSize==0)
    return 0;
int a,b=0,c=0,d=0;
a=height[0];
for(int i=0;i<heightSize;i++)
{if(height[i]>=a)
{
    for(int j=b;j<i;j++)
    {
        c=c+a-height[j];
        height[j]=a;
    }
a=height[i];
b=i;
}


}
a=height[heightSize-1];
b=heightSize-1;
for(int i=heightSize-1;i>=0;i--)
{if(height[i]>=a)
{
for(int j=b;j>i;j--)
    {
        c=c+a-height[j];
        height[j]=a;
    }
a=height[i];
b=i;
}


}
return c;

}
