/* To extract particular bit of a byte */

#include<stdio.h>
int main()
{
    int num,pos,res;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the position:");
    scanf("%d",&pos);
    res=((num>>pos)&1);
    printf("%d",res);
}
