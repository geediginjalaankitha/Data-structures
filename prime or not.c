#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main() {
    int i,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
         c++;
        }
    }
    if(c==2)
    {
      printf("number is prime");
    }
    else
    {
      printf("number is not prime");
    }
     return 0;
}