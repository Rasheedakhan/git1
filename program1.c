#include<stdio.h>
int main()
{
    int a=8,b=51,c=2,res;
    c=(a^c)^a;
    b=b%4;
    res=a+b+c;
    printf("result is %d",res);
    return 0;
}

