#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    FILE *arq;
    char titulo[31];
    int codlivro;
    float preco;

    if((arq = fopen("teste2.txt","w")) == NULL){
        cout << "Erro na criacao do arquivo\n";
        return -1;
    }
    do{
        cout << "Titulo: ";
        cin.clear(); fflush(stdin);
        cin.getline(titulo,30);
        if(strlen(titulo) > 1){
            cout << "Codigo: ";
            cin >> codlivro;
            cout << "Preco: ";
            cin >> preco;
            fprintf(arq, "%-30s %-4d %.2f\n", titulo, codlivro, preco);
        }
    } while(strlen(titulo) > 1);
    cout << "Fim de execucao!\n";
    fclose(arq);
    system("pause");
    return 0;
}