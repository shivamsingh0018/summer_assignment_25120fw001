//program to reverse a number

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int rev=0,ld;
    while(n>0){
        ld=n%10;
        rev=ld+(rev*10);
        n=n/10;
    }
    printf("the reverse of a number is:%d", rev);

    return 0;
}