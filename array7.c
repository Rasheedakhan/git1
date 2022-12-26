/* To find smallest and second smallest element */

#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,small=INT_MAX,s_small=INT_MAX;
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
     if(arr[i]<small)
        {
         s_small=small;
         small=arr[i];
        }
     if(arr[i]>small && arr[i]<s_small)
     {
         s_small=arr[i];
     }
  }
   printf("small=%d,second small=%d",small,s_small);
}
