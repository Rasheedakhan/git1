#include <stdio.h>

int main()
{
	int i=10,j=20;
	const int *const ptr=&i;
	printf("%d\n",*ptr);
	ptr=&j;
	*ptr=100;
	return 0;
}

