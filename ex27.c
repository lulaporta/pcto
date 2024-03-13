#include <stdio.h>

int main ()
{
    int a[5] = {2,1,3,7,5};
    int c = 0;
    int c2 = 1;
    int temp;
    while(c2<5)
    {
        if(a[c]>a[c2])
    {
    temp = a[c];
    a[c] = a[c2];
    a[c2] = temp;
    }
    c = c + 1;
    c2 = C2 + 1;

}