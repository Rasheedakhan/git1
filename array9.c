/* To remove an element from an array */

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
    printf("Enter the element position to delete:");
    scanf("%d",&pos);
    if(pos<0 || pos>n)
    {
        printf("Invalid position! Please enter position between 1 to %d",n);
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("Elements of array after deletion are:");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
