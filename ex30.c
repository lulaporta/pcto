#include <stdio.h>

void saluto ()
{
    printf("ciao\n");
    printf("come stai?\n");
}
void somma(int a, int b)
{
    printf("%d\n", a + b);
}
int main ()
{
    int num1 = 6;
    int num2 = 8;

    somma(num1, num2);
}
