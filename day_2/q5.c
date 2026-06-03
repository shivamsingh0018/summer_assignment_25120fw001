//program to find sum of digits of a number

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int sum=0,ld;   //ld=last digit
    while(n>0){
        ld=n%10;
        sum+=ld;
        n=n/10;
    }
    printf("the sum of digits of a number is:%d", sum);

    return 0;
}