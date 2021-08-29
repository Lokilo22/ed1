#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
    float *v;
    int i, num_componentes;

    printf("Informe o numero de componentes do vetor\n");
    scanf("%d", &num_componentes);

    /*v = (float *) malloc(num_componentes * sizeof(float));*/
    v = (float *) calloc(num_componentes, sizeof(float));

    for (i = 0; i < num_componentes; i++){
        printf("%.2f\n",v[i]);
    }

    for (i = 0; i < num_componentes; i++){
        printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
        scanf("%f",&v[i]);
    }

    printf("\n******** Valores do vetor dinamico ***********\n\n");

    for ( i = 0; i < num_componentes; i++){
        printf("%.2f\n",v[i]);
    }

    int novo_tam;
    printf("\nInforme novo tamanho para redimensionamento: ");
    scanf("%d", &novo_tam);
    
    if(novo_tam > 0 /*&& novo_tam < num_componentes*/){
        v = (float *) realloc(v, novo_tam);
        printf("\nValor contidos: \n");
        for (i = 0; i < novo_tam; i++){
            printf("%.2f\n",v[i]);
        }
        
    }
    else
        printf("\nNovo tamanho eh invalido!\n");

    free(v);

    getch();
    return 0;
}