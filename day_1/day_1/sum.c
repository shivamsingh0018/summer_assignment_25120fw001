//program to find sum of first n natural numbers..

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    printf("the sum of first n numbers is:%d", sum);

    return 0;
}