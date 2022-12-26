#include<stdio.h>
int main()
{
    fun();
    fun();
    fun();
}
fun()
{
    int x=2,y=5;
    printf("x=%d,y=%d\n",x,y);
    x++;
    y++;
}
