#include<stdio.h>
int main()
{
    char n,res;
    printf("enter the n value:");
    scanf("%c",&n);
    res=(n&0x0f);
    printf("%d",res);
}
