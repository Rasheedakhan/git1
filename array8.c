/* to search an element in an array */

#include<stdio.h>
int main()
{
    int n,i,pos;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position to be search:");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        if(pos==arr[i])
          {
               printf("Number '%d' Found at Position %d\n",pos,i);
               return 0;
          }
    }
        printf("Number '%d' is not found",n);
}
