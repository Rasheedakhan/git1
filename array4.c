/* To find sum of an array */

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("The sum is:%d\n",sum);
    printf("Average=%.2f",avg);
}
