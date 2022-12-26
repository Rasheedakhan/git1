#include <stdio.h>
int smallest(int x,int y,int z)
{
	int c=0;
	while(x&&y&&z)
    {
		x--;
		y--;
		z--;
		c++;
	}
	return c;
}
int main()
{
	int a,b,c;
	printf("enter the values of a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Minimum of 3 numbers is %d",smallest(a,b,c));
	return 0;
}

