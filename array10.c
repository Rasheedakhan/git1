/* To find the largest element */

#include<stdio.h>
int main()
{
    int n,i,largest;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(i=0;i<n;i++)
    {
        if(largest<arr[i])
          largest=arr[i];
    }
    printf("The largest element is:%d",largest);
}
