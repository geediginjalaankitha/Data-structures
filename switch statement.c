#include<stdio.h>
void main ()
{
int a=10,b=5;
char ch;
printf("\n enter the caseno.");
scanf("%c",&ch);
switch(ch)
{
case '1':printf("\n addition is %d ",a+b);
break;
case '2':printf("\n subtraction is %d",a-b);
break;
case '3':printf("\n multiplication is %d",a*b);
break;
case '4':printf("\n division is %d",a/b);
break;
case '5':printf("\n modulus divisionis %d",a%b);
break;
}
}