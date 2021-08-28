#include <iostream>
#include <locale>
#include "Calculadora.h"
using namespace std;

void menu(){
    cout << "Escolha a opção:\n";
    cout << "1 - Soma" << endl;
    cout << "2 - Subtração" << endl;
    cout << "3 - Multiplicação" << endl;
    cout << "4 - Divisão" << endl;
    cout << "Qualquer outro para sair.\n";
    cout << "opção: ";
}

float ler_numero(int i){
    cout << "Informe N" << i <<": ";
    float tmp;
    cin >> tmp;
    return tmp;
}
void mostra_resultado(float res){
    cout << "Resultado: " << res << endl;
}
int main(int argc, char const *argv[]){
    setlocale(LC_ALL, "Portuguese");
    
    int op(1);
    float n1, n2;
    do{
        menu();
        cin >> op;
        float tmp;
        switch (op){
        case 1: //soma
            n1 = ler_numero(1);
            n2 = ler_numero(2);
            tmp = soma(n1, n2);
            mostra_resultado(tmp);
            break;
        case 2: //subtração
            n1 = ler_numero(1);
            n2 = ler_numero(2);
            tmp = subtracao(n1, n2);
            mostra_resultado(tmp);
            break;
        case 3: //multiplicação
            n1 = ler_numero(1);
            n2 = ler_numero(2);
            tmp = multiplicacao(n1, n2);
            mostra_resultado(tmp);
            break;
        case 4: // divisão
            n1 = ler_numero(1);
            n2 = ler_numero(2);
            tmp = divisao(n1, n2);
            mostra_resultado(tmp);
            break;
        default:
            cout << "Opção inválida e fim de programa!\n";
        }
    } while (op>=1 && op<=4);
    
    cout << "fim do programa";
    system("pause");
       
    return 0;
}
