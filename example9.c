/* To swap 3 bits of lower nibble with 3 bits of the upper nibble */

#include<stdio.h>

int main()
{
    unsigned int ch;
    printf("enter the number:");
    scanf("%d", &ch);
    //getchar();
   // ch = 'a';
    for (int i = 7; i >= 0; i--)
    {
        if ((ch >> i) & 01)
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
    ch = (((ch >> 5) | (ch << 5)) | (ch & 0x18));
     for (int i = 7; i >= 0; i--)
    {
        printf("%d ", ((ch >> i) & 01));
    }
    return 0;
}
