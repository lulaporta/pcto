#include <stdio.h>

int main ()
{
    char parola[30];
    int b = 0;
    scanf("%[^\n]s", parola);
    printf("scrivi una parola\n");
    while(parola[b]!='\0') 
    {
    if((parola[b]>65)&&(parola[b]<90))
    printf("%c", parola[b]+32);
    
    else if((parola[b]>97)&&(parola[b]<122))
    printf("%c", parola[b]-32);
    b=b+1;
    } 
}

