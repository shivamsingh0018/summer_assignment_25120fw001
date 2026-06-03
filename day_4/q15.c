//program to check armstrong number

#include<stdio.h>
int main(){
    int n,sum=0,ld;
    printf("enter a number:");
    scanf("%d", &n);
    int c=n;

    while(n>0){
        ld=n%10;
        sum=(ld*ld*ld)+sum;
        n=n/10;
    }
    if(c==sum)
    printf("armstrong number.");
    else
    printf("not a armstrong number.");

    return 0;
}