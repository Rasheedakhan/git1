/* To check particular bit set or not */

#include<stdio.h>
int main()
{
    int num,pos;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the position:");
    scanf("%d",&pos);
    if((num>>pos)&1)
        printf("The bit %d is set in %d",pos,num);
    else
        printf("The bit %d is not set in %d",pos,num);
}
