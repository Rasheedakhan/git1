/* To swap two bits of a byte */

#include<stdio.h>
int main()
{
    int num,pos1,pos2;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the positions to swap:");
    scanf("%d%d",&pos1,&pos2);
    if(((num>>pos2)&1)!=((num>>pos1)&1))
    {
        num^=(1<<pos2);
        num^=(1<<pos1);
    }
    printf("%d",num);
}
