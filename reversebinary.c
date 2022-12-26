#include <stdio.h>
int main()
{
    int i,n,j;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=31,j=0;i>j;i--,j++)
    {
        if(((n>>i)&1)!=((n>>j)&1))
        {
            n=n^(1<<i);
            n=n^(1<<j);
        }
    }
    for(i=31;i>=0;i--)
    {
        printf("%d ",(n>>i)&1);
    }
    //printf("\n%d",n);
}
