#include <iostream>
#include <windows.h>
#include "cadastro.h"
using namespace std;

void menu(){
    cout << "Favor selecionar uma opção. " << endl;
    cout << "1 - Cadastrar número. " << endl;
    cout << "2 - Exibir número(s) cadastros. " << endl;
    cout << "3 - Exibir quantidade de números cadastros. " << endl;
    cout << "4 - Remover último número cadastrado. " << endl;
    cout << "5 - Sair" << endl;
}

int main(int argc, char const *argv[]){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    
    SetConsoleOutputCP(CPAGE_UTF8);

    int op(1), *v, num;
    do{
        menu();
        switch (op){
            case 1:
                cadastrarNumeros(v, &num);
                break;
            case 2:
                exibirNumeros(v, &num);
                break;
            case 3:
                qtdNumerosCadastrados(&num);
                break;
            case 4:
                deletar(v);
                break;
            case 5:
                break;
        }
    }while(op != 5);
    
    cout << "Fim do programa!";
    system("pause");
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
