/* to find all bits of a number unset/clear */

#include <stdio.h>
int BitsUnset(unsigned int num)
{
    int pos,cnt=0;
    for(pos=7;pos>=0;pos--)
    {
        if(num&(1<<pos))
        {
            cnt=1;
            break;
        }
    }
    if(cnt==0)
        return 1;
    else
        return 0;
}
int main()
{
    unsigned int number;
    printf("Enter an integer number(between 0-255):");
    scanf("%d",&number);
    if(BitsUnset(number))
        printf("All bits are UNSET\n");
    else
        printf("All bits are not UNSET\n");
    return 0;
}
