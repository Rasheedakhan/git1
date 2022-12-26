#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("enter the no.of integers to be entered:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("memory is not available");
    }
    printf("enter an integer:");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));
}
