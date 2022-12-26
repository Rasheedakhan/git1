#include<stdio.h>
void fun1();
void fun2();
int main()
{
    extern int x;
    printf("%d\n",x);
    fun1();
    fun2();
}
void fun1()
{
    int x=1;
    x+=5;
    printf("%d\n",x);
}
void fun2()
{
    int y=2;
    y++;
    printf("%d",y);
}
int x=10;
