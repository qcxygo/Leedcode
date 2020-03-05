
int mySqrt(int x){
if(x==0)
return 0;
for(long long i=0;i<46400;i++){
    if(i*i<=x&&(i+1)*(i+1)>x)
    return (int)i;
}
return 0;
}
