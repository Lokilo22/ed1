#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
    int valor = 27;
    int *ptr;
    ptr = &valor;

    printf("Utilizando Ponteiro\n\n");
    printf("Conteudo da variavel valor: %d\n",valor);
    printf("Endereço da variavel valor: %x \n", &valor);
    printf("Conteudo da variavel ponteiro ptr: %x \n", ptr);
    printf("Acessando a variavel apontada pelo ponteiro ptr: %d \n", *ptr);
    getch();
    return(0);
}