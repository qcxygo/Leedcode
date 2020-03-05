int maxProfit(int* prices, int pricesSize){
int c=0;
for(int i=1;i<pricesSize;i++){
    if(prices[i]>prices[i-1]){
        c+=prices[i]-prices[i-1];
    }
}
return c;
}
