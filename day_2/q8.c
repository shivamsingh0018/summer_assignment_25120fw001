//program to check whether a number is palindrome 

#include<stdio.h>
int main(){
    int n,c,ld,rev=0;
    printf("enter a number:");
    scanf("%d", &n);
    c=n;

    while(n>0){
        ld=n%10;
        rev=ld+(rev*10);
        n=n/10;
    }

    if(c==rev)
        printf("the number is palindrome:");
    
    else
        printf("the number is not palindrome:");
    
    return 0;
}