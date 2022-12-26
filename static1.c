#include<stdio.h>
void display();
int main()
{
    display();
    display();
}
void display()
{
    static int x=10;
    x+=10;
    printf("%d\n",x);
}
