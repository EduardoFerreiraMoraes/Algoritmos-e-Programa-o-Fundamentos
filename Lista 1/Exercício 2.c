#include<stdio.h>
int main()
{
    char nome[15];
    printf( "Digete seu nome : ");
    scanf( "%s",&nome);
    printf("Seja Bem Vindo !!!, %s ", &nome);
    return 0;
}