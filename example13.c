/* To check particular bit position set or not */

#include <stdio.h>
int main()
{
    unsigned int number;
    int result,position;
    printf("Enter the integer:");
    scanf("%d",&number);
    printf("enter position:");
    scanf("%d",&position);
    result=(number>>(position));
    if (result&1)
        printf("The position %d in %d is set\n",position,number);
        else
        printf("The position %d in %d is not set",position,number);

    }

