#include<stdio.h>
void display();
int main()
{
    display();
    display();
}
void display()
{
    int x=10;
    x+=10;
    printf("%d\n",x);
}
