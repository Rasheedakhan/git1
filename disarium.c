#include<stdio.h>
int countDigits(int n)
{
	int count_digits=0;
	int x=n;
	while(x)
	{
		x=x/10;
		count_digits++;
	}
	return count_digits;
}
int check(int n)
{
	int count_digits=countDigits(n);
	int sum=0;
	int x=n;
	while(x)
	{
		int r=x%10;
		sum=sum+pow(r,count_digits--);
		x=x/10;
	}
	return(sum==n);
}
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(check(n))
		printf("disarium Number");
	else
		printf("Not a Disarium Number");
	return 0;
}

