#include<stdio.h>
void main()
{
int i,n,f0=0,f1=1,f2=2;
printf("\n enter n value");
scanf("%d",&n);
printf("%d%d",f0,f1);
for(i=1;i<n;i++)
{
f2=f0+f1;
printf("%d",f2);
f0=f1;
f1=f2;
}
}