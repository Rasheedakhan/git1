/* To count no.of clear bits */

#include <stdio.h>
int main()
{
    int number,count=0;
    printf("Enter the integer:");
    scanf("%d",&number);
    for(int i=31;i>=0;i--)
    {
        if (((number>>i)&1)==0)
            count++;
    }
    printf("number of zero's are:%d\n",count);
    return 0;
}
