/* To count the no.of 1's and 0's */

#include<stdio.h>
int main()
{
    int n,zeros=0,ones=0,i;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<sizeof(int)*8;i++)
    {
        if(n&1)
            ones++;
        else
            zeros++;
        n>>=1;
    }
    printf("Total no.of zero bits:%d\n",zeros);
    printf("Total no.of one bits:%d",ones);
    return 0;
}
