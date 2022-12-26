#include<stdio.h>
int main()
{
    const volatile int a=10;
    printf("%d",a);
    a++;
    printf("%d",a);
}
