/* To count no.of set bits */

#include <stdio.h>
int main()
{
    unsigned int number;
    int count=0;
    printf("Enter the unsigned integer:");
    scanf("%d",&number);
    while (number!=0)
    {
        if((number&1)==1)
            count++;
        number=number>>1;
    }
    printf("number of one's are:%d\n",count);
    return 0;
}
