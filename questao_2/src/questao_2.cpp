#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funcoes.h"

int main(void){
    int *v, i, num = 0;
    printf("Bem vindo!\n");
    printf("Favor inserir os valores para preencher o vetor: \n");
    v = (int *)malloc(10 * sizeof(int));
    for (i = 1; i < 11; i++)
    {
        printf("Digite o numero para entrar na posicao %d do vetor.\n", i);
        scanf("%d", &v[i]);fflush(stdin);
        
    }
    
    do{
        printf("\n");
        printf("Favor Escolher Uma Opcao no menur: \n");
        printf("1 - Exibir Vetor Informado.\n");
        printf("2 - Exibir Elementos Impares.\n");
        printf("3 - Exibir Elementos Pares.\n");
        printf("4 - Para Sair do Programa.\n");
        scanf("%d", &num);
        printf("\n");
        switch (num)
        {

        case 1:
            exibirVetor(v);
            printf("\n");
            break;
        case 2:
            exibirImpares(v);
            printf("\n");
            break;
        case 3:
            exibirPares(v);
            printf("\n");
            break;
        case 4:
            break;
        }
    
    }while(num != 4);
    system("pause");
    free(v);

}