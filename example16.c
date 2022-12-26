/* To set the bit */

#include<stdio.h>
int main()
{
    int n,pos,res;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the position:");
    scanf("%d",&pos);
    res=n|(1<<pos);
    printf("%d",res);
}
