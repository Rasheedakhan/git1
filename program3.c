#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int n=0,i=0,j=0,cnt=0,maxvowel=0;
  printf("enter the number of strings:");
  scanf("%d",&n);
//  __fpurge(stdin);
    getchar();
  char strs[n][30];
  int arr[n];
  for(i=0;i<n;i++)
  {
    gets(strs[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<30;j++)
    {
      if(strs[i][j]=='a' || strs[i][j]=='e' || strs[i][j]=='i' || strs[i][j]=='o' || strs[i][j]=='u')
        cnt++;
    }
    printf("%s having %d vowels\n",strs[i],cnt);
    arr[i]=cnt;
    cnt=0;
  }
  int max = arr[0];
  for(i=1;i<n;i++)
  {
    if(max<arr[i])
    {
      max=arr[i] ;
      j=i;
    }
  }
  printf("%d\n",max);
  printf("%s\n",strs[j]);
  return 0;
}
