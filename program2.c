#include<stdio.h>
int main()
{
    char consumername[30];
    int consumerID;
    float units,total,amount;
    printf("enter the consumer name:\n");
    scanf("%s",&consumername);
    printf("enter the consumer ID:\n");
    scanf("%d",&consumerID);
    printf("enter the no.of units:");
    scanf("%f",&units);
    if(units<=200)
    {
        printf("consumer name:%s,consumer ID:%d,units:%f\n",consumername,consumerID,units);
        printf("Amount is %.2f",units);
    }
     else if(units>200 && units<=300)
    {
        printf("consumer name:%s,consumer ID:%d,units:%f\n",consumername,consumerID,units);
        amount=(((units-200)*1.5)+(200*1));
        printf("Amount is %.2f",amount);
    }
    else if(units>300)
    {
        if(units<=400)
        {
        printf("consumer name:%s,consumer ID:%d,units:%f\n",consumername,consumerID,units);
        amount=(((units-300)*2)+(200*1)+(100*1.5));
        printf("Amount is %.2f",amount);
        }
    }
    else
    {
        printf("consumer name:%s,consumer ID:%d,units:%f\n",consumername,consumerID,units);
        amount=(((units-300)*2)+(200*1)+(100*1.5)+500);
        printf("Amount is %.2f",amount);
        printf("penalty of 500\n");
    }
}
