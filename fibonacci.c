#include<stdio.h>
int fib(int);
int main()
{
    int n,res;
    printf("enter the n value:");
    scanf("%d",&n);
    res=fib(n);
    printf("The fibonacci of %d is %d",n,res);
}
int fib(int n)
{
    if(n==0|n==1)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}
