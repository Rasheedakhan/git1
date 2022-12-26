#include <stdio.h>
int main()
{
    int num,divisor,remainder;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the divisor:");
    scanf("%d",&divisor);
    while(num>=divisor)
    {
        num=num-divisor;
    }
    remainder=num;
    printf("The remainder is %d",remainder);
    return 0;
}
