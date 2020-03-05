int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration){
    if(timeSeriesSize==0)
    return 0;
long long a=0;
for(int i=1;i<timeSeriesSize;i++){
    if(timeSeries[i]-timeSeries[i-1]>=duration)
    a+=duration;
    else
    a+=(timeSeries[i]-timeSeries[i-1]);

}
a+=duration;
return (int )a;
}
