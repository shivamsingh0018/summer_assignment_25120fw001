//program to check whether a number is prime

#include<stdio.h>
int main(){
    int n,a;
    printf("enter a number:");
    scanf("%d", &n);

    a=0;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            a=1;
            break;
        }
    }

    if(a==0)
    printf("prime number.");

    else
    printf("not prime.");

    return 0;
}