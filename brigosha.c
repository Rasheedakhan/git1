#include<stdio.h>
int main()
{
    static int count=0;
    if(count<50)
    {
        printf("%d.Brigosha\n",count);
        count++;
        main();
    }
}
