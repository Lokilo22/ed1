#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;


int* cadastrarNumeros(int *v, int *num){
    if(num == 0){
        v = (int*) malloc(sizeof(int));
        if(v == NULL){
            cout << "Sem mémoria para alocar" << endl;
            exit(1);
        }
        cout << "Digite um número para registrar: " << endl;
        cin >> v[0];
    }
    else{
        v = (int*) realloc(v,(*num + 1)*sizeof(int));
        if(v == NULL){
        cout << "Sem mémoria suficente para alocar" << endl;
        exit(1);
        }
        cout << "Digite um número para registrar";
        cin >> v[*num];
    }
    *num = *num + 1;
    return v;
    
}

void exibirNumeros(int *v, int *num){
    for(int i = 0; i < *num; i++){
        cout << v[i] << endl;
    }
    
}

void qtdNumerosCadastrados(int *num){
    for(int i = 0; i < *num; i++){
        cout << i << endl;
    }
}

void deletar(int *v){
    cout << "numero apagado" << endl;
}