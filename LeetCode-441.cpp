int arrangeCoins(int n){
    long long l=0,r=80000;
    long long k;
  long long  m=(l+r)/2;
    while(r-l>1){
        m=(l+r)/2;
        k=(m+0)*(m+1)/2;
if(k==n){
return m;
}
if(k>n)
r=m;
else
l=m;
    }
    return (int)l;
    
    

}
