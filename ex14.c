#include <stdio.h>

int main ()
{
    int a = 12;
    int b = 5;
    int c = 12;
    if(a == b && b == c)
    {
        printf("la figura corrisponde ad un triangolo equilatero\n");
    }
    else if(a == b && b != c)
    {
        printf("il triangolo è isoscele\n");
    }
    else if(a == c && c != b)
    {
        printf("il triangolo è isoscele\n");
    }
    else if(b == c && c != a)
    {
        printf("il triangolo è iscoscele\n");
    }
    else
    {
        printf("il triangolo è scaleno\n");
    }
}