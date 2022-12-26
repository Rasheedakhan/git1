/* To extract middle nibble */

#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    num=((num>>2)&0x0f);
    printf("%d",num);
}
