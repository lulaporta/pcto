#include <stdio.h>

int main ()
{
   int a = 1;
   int b = 3;
   int c = 5;
   printf("inserisic un numero \n");
   scanf("%d %d %d", &a, &b, &c);
   printf("numeri inseriti %d %d %d\n", a + b + c, a - b + c, c + c + c);

}