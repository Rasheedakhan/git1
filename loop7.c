/* Write a C program to calculate sum of first and last digit of a given number.*/

#include<stdio.h>
int main()
{
      int s=0,l,n;
      printf("Enter Number:");
      scanf("%d",&n);
      if(n>10)
      {
            l=n%10;
      }
      while(n>=10)
      {
            n=n/10;
      }
      s=l+n;
      printf("First Digit:%d \nLast Digit:%d\n",n,l);
      printf("Sum of First and Last Digits:%d",s);
      return 0;
}
