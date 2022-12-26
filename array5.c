/* To read and print the array elements */

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
