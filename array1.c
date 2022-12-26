/* to print the reverse the array */

#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   /* for(i=0;i<n/2;i++)
    {
       temp=arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1]=temp;
    }*/
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
