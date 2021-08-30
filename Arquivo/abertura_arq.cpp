#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    FILE *arq;
    char ch;

    if ((arq = fopen("teste2.txt", "r"))== NULL){
        cout << "Erro na abertura do arquivo\n";
        return -1;
    }
    ch = getc(arq);
    while (ch != EOF)
    {
        putchar(ch);
        ch = getc(arq);
    }
    fclose (arq);

    return 0;
}