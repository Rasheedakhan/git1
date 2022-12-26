#include<stdio.h>
int main()
{
    int num,dig,sum;
    printf("enter the number:");
    scanf("%d",&num);
    do
    {
        for(sum=0;num!=0;num/=10)
        {
            dig=num%10;
            sum+=dig;
        }
        printf("%d\t",sum);
        num=sum;

    }while(num/10!=0);
    printf("\n");
}
