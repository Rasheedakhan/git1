/* To check all the bits in given integer are one's */

#include <stdio.h>
int main()
{
	unsigned int n;
	printf("enter the integer:");
	scanf("%d",&n);
	while(n>0)
    {
		int temp=n&1;
		if(temp==0)
		{
			printf("All bits are not set\n");
			return 0;
		}
		n=n>>1;
	}
	printf("All bits are set\n");
	return 0;
}
