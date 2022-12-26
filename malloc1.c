#include<stdio.h>
int main()
{
    float *p,sum=0;
    int i,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    p=(float*)malloc(n*sizeof(float));
    if(p==NULL)
    {
        printf("Memory allocation failed");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter marks for %d student:",i+1);
        scanf("%f",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum +=*(p+i);
    }
    printf("\nAverage marks=%.2f\n",sum/n);
    return 0;
}
