//program to find product of digits of a number

#include<stdio.h>
int main(){
    int n,ld,product=1;
    printf("enter a number:");
    scanf("%d", &n);

    while(n>0){
        ld=n%10;
        product*=ld;
        n=n/10;
    }
    printf("the product of digits of a number is:%d", product);

    return 0;
}