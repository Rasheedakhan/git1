#include <string.h>
int main()
{
    char s[1000];
    int  i,j=0;
    printf("Enter  the string:");
    gets(s);
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+j];
     	if(s[i]==' '|| s[i]=='\t')
     	{
		  j++;
		  i--;
	    }
    }
    printf("string after removing all blank spaces:\n");
    printf("%s",s);
    return 0;
}
