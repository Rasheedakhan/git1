#include <stdio.h>

//typedef int* Int_ptr;
//Int_ptr var,var1,var2;
typedef int* ptr;
int main()
{
  ptr var;
  *var=20;
  printf("Value of var is %d",*var);
  return 0;
}
