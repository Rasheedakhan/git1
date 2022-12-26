/* factorial of any number */
#include<stdio.h>
int main()
{
    int n,num,fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    num=n;
    if(n<0)
        printf("no factorial of negative number\n");
    else
    {
        for(;n>1;n--)
        {
            fact*=n;
        }
        printf("factorial of %d=%d\n",num,fact);
    }
}
