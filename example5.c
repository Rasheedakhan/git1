/* To swap two bytes */

#include<stdio.h>
int main()
{
    int num=0x1234;
    printf("before swapping:%x\n",num);
    num=((num<<8)&0xff00)|((num>>8)&0x00ff);
    printf("after swapping:%x",num);
}
