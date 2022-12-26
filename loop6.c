/* C program to read a number to set a range. Print all numbers in that range starting from 1. Also print the numbers which perfectly divide the given number. */

#include<stdio.h>
int main()
{
      int i=1,n;
      printf("Enter number:");
      scanf("%d",&n);
      printf("\nNumbers in range 1 to %d:\n",n);
      for(i=1;i<=n;i++)
      {
            printf("%d ",i);
      }
      printf("\n");
      printf("\nNumbers that perfectly divide %d are:\n",n);
      for(i=1;i<=n;i++)
      {
            if(n%i==0)
            {
                  printf("%d ",i);
            }
      }
      return 0;
}
