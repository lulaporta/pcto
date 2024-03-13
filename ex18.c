#include <stdio.h>

int main ()
{
    int a[5] = {3,18,17,21,150};
    a[2] = 32;
    printf("%d", a[4]);
    
    int b = 0;
    while(b<5)
    {
        printf("%d", a[5]);
        b = b + 1;
    }
}