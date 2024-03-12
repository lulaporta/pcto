#include <stdio.h>

int main ()
{
    int a = 1;
    int b = 2;
    int c = 3;
    if(b-a == c-b)
    {
        sprintf("i tre numeri sono in successione aritmetica\n");
    }
    else
    {
        sprintf("i tre numeri non sono in successione aritmetica\n");
    }
}