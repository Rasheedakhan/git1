#include <stdio.h>
int main()
{
	int i=10,j=20;
	const int *ptr = &i;
	printf("%d\n",*ptr);
	*ptr=100;
	ptr=&j;
	printf("%d\n",*ptr);
	return 0;
}

