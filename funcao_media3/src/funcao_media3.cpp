#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float somatorio(0), media;
    for (int i = 0; i < argc; i++)
    {
        somatorio=somatorio+atof(argv[i]);
    }
    media=somatorio/(argc-1);
    printf("Media: %.1f\n", media);
    printf("Fim do programa %s \n", argv[0]);
    system("pause");
    
}
