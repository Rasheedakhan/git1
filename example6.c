/* To reverse bits of a number */

#include <stdio.h>
int main()
{
    int temp=0,var,i;
    printf("enter the number:");
    scanf("%d",&var);
    for (i = 31; i >= 0; i--)
        printf("%d ",((var >> i) & 01));
    printf("\n");
    for(i=31;i>=0;i--)
    {
        if((var>>i)&1)
        {
            temp=temp|(1<<(31-i));
        }
    }
    printf("%d\n",temp);
     for (i = 31; i >= 0; i--)
        printf("%d ", ((temp >> i ) & 01));
    printf("\n");

}
