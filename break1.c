#include<stdio.h>
int main()
{
    int n;
    for(n=1;n<5;n++)
    {
        if(n==3)
        {
            printf("I am using break\n");
            break;
        }
        printf("number=%d\n",n);
    }
    printf("out of for loop");
}
