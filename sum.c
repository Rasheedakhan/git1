#include<stdio.h>
int sum(int ,int);
int main()
{
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d%d",&a,&b);
    printf("The sum of %d and %d is %d",a,b,sum(a,b));
}
int sum(int a,int b)
{
    if(a==0||b==0)
        return 1;
    else
        return(a+b);
}
