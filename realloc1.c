#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,newsize,size;
int *p;
printf("Enter size of list:");
scanf("%d",&size);
p=(int*)malloc(size*sizeof(int));
printf("Enter %d numbers:",size);
for(i=0;i<size;i++)
scanf("%d",&p[i]);
printf("The numbers in the list are\n");
for(i=0;i<size;i++)
printf("%d \n",p[i]);
printf("Enter new size of list:");
scanf("%d",&newsize);
p=realloc(p,newsize*sizeof(int));
if(newsize>size)
{
printf("Enter %d numbers",newsize-size);
for(i=size;i<newsize;i++)
scanf("%d",&p[i]);
}
printf("The numbers in the list are:");
for(i=0;i<newsize;i++)
printf("%d ",p[i]);
return 0;
}
