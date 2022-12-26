#include<stdio.h>
int main()
{
    int a=5,b=3,res;
    res=(a<b)&&(b++);
    printf("%d\n",res);
    printf("%d",b);
    return 0;
}
