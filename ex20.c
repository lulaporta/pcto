#include <stdio.h>

int main ()
{
    char a[5] = {'c','i','a','o','\0'};
    int b = 0;
    while(b<4)
    {
        printf("%c", a[b]);
        b = b + 1;
    }
    Printf("\n");
}