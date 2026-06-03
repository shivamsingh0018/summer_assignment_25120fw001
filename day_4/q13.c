//program to generate fibonacci series

#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("enter a number:");
    scanf("%d", &n);

    printf("%d ", a);
    for(int i=1; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ", c);
    }

    return 0;
}