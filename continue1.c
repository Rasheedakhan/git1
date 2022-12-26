#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    float avg;
    printf("enter 10 positive integers:\n");
    while(i<=10)
    {
        printf("enter number %d:",i);
        scanf("%d",&n);
        if(n<0)
        {
            printf("enter only positive numbers\n");
            continue;
        }
        sum+=n;
        i++;
    }
    avg=sum/10.0;
    printf("sum=%d avg=%f",sum,avg);
}
