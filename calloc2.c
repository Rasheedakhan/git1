#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p;
    printf("Enter value of n:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter values of n:");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
        printf("Square of %d=%d\n",p[i],p[i]*p[i]);
    return 0;
}
