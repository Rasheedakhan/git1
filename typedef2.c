#include <stdio.h>
#include <string.h>

typedef struct students
{
  char name[50];
  char branch[50];
  int ID_no;
} students;
int main()
{
  students st;
  strcpy(st.name,"Rasheeda");
  strcpy(st.branch,"ECE");
  st.ID_no=108;
  printf("Name:%s\n",st.name);
  printf("Branch:%s\n",st.branch);
  printf("ID no:%d\n",st.ID_no);
  return 0;
}
