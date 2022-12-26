/* To find the next number which is power of 2 */

#include<stdio.h>
#include<math.h>
int main()
{
    int num=0,i=0;
    printf("Enter Number:");
    scanf("%d",&num);
    num--;
    while(i<=4)
    {
        num=num|(num>>(int)pow(2,i));
        i++;
    }
    num++;
    printf("The next number,power of 2 is:%d\n",num);
    return 0;
}
