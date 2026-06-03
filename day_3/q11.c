//program to find GCD of two numbers

#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    for(i=a<b?a:b; i>=1; i--){
        if(a%i==0 && b%i==0){
            break;
        }

    }
    printf("the HCF is:%d ", i);

    return 0;
}