/* decimal to binary */

#include<stdio.h>
int main()
{
    int num,pos;
    printf("enter the number:");
    scanf("%d",&num);
    for(pos=31;pos>=0;pos--)
        if((num&(1<<pos))==0)
           printf("0");
           else
            printf("1");
}
