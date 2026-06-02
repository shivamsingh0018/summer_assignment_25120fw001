//program to count digits in a number

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int count=0;
    while(n>0){
        n=n/10;
        count=count+1;

    }
    printf("the count of digits are: %d", count);


return 0;
}