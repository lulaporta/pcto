#include <stdio.h>

int main ()
{
    char parola[25];
    scanf("%s[^\n]s", parola);
    printf("%s", parola);
}