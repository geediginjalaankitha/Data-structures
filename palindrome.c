#include<stdio.h>
int main() {
    char str[100];
    int i,len,flag = 0;
    printf("enter a string");
    scanf("%s",str);
    len = strlen(str);
    for(i = 0; i<len; i++) {
       if(str[i] !=str[len-i-1]) {
         flag =1;
         break;
       }
    }
    if(flag) {
        printf("%s is not a palindrome.\n",str);
    } else {
        printf("%s is a palindrome. \n",str);
    }
    return 0;
}