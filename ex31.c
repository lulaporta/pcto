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
    int a;
    int b;
    int somma;

    printf("inserisci due numeri e ti restituirò la somma\n");
    scanf("%d %d", &a, &b);
    
    risultato = somma(a,b);
    printf("%d\n", risultato);
}
