/* go to statement */
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
    even:printf("number is even\n");
    goto end;
    odd:printf("number is negative\n");
    goto end;
    end:printf("\n");
}
