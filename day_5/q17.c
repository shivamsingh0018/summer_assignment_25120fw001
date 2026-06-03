//program to check perfect number

#include<stdio.h>
int main(){
    int n,sum=0,c;
    printf("enter a number:");
    scanf("%d", &n);
    c=n;

    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==c)
    printf("perfect number.");
    else
    printf("not a perfect number.");

    return 0;
}