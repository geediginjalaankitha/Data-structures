#include<stdio.h>
int main()
{
int a[3]={10,20,30};
int max,min,sum;
int i,avg;
max=a[0];min=a[0];sum=0;
for(i=0;i<3;i++)
{
if(a[i]>max)
max=a[i];
}
printf("max is %5d \n",max);
for(i=0;i<3;i++)
{
if(a[i]<min)
min=a[i];
}
printf("min is %5d \n",min);
for (i=0;i<3;i++)
{
sum=sum+a[i];
}
avg=sum/3;
printf("avg is %5d\n",avg);
return 0;
}