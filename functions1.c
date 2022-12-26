/* prime numbers between two integers */
#include <stdio.h>
int checkPrimeNumber(int n);
int main()
{
  int n1,n2,i,temp;
  printf("Enter two positive integers:");
  scanf("%d %d",&n1,&n2);
  if(n1>n2)
  {
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
  }
  printf("Prime numbers between %d and %d are:",n1,n2);
  for(i=n1+1;i<n2;i++)
  {
    temp=checkPrimeNumber(i);
    if(temp==1)
    {
      printf("%d ",i);
    }
  }
  return 0;
}
int checkPrimeNumber(int n)
{
  int j,temp=1;
  for(j=2;j<=n/2;j++)
  {
    if(n%j==0)
     {
      temp=0;
      break;
    }
  }
  return temp;
}
