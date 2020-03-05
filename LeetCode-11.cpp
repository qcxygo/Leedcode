int maxArea(int* height, int heightSize){
if(heightSize==0)
return 0;
int a=0,b=heightSize-1,max=0,t;
while(a!=b){
    if(height[b]>height[a])
{t=(b-a)*height[a];
a++;}
else
{t=(b-a)*height[b];
b--;

}
if(t>max)
max=t;
}
return max;
}
