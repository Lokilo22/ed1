#include <stdlib.h>
#include <stdio.h>

void exibirVetor(int *v){
    for(int i = 0; i < 10; i++ ){
        printf("%d\t", v[i]);
    }
}

void exibirImpares(int *v){
    for (int i = 0; i < 10; i++)
    {
        if( i%2 != 0 ){
            printf("%d\t", v[i]);
        }
    }
}

void exibirPares(int *v){
    for (int i = 0; i < 10; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\t", v[i]);
        }
        
    }

    
}