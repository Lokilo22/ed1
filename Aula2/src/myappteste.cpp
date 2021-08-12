#include <iostream>
using namespace std;

int menu(unsigned int num){
    cout << "Menu" << ": "<< endl;
    cout << "Informe N" << num << ": ";
    int tmp;
    cin >> tmp;
    cout << endl;
    return tmp;
}

void soma(int nn1, int nn2){
    cout << "Soma: " << nn1+nn2 << endl;
}

int main(int argc, char const *argv[])
{
    int n1 = menu(1);
    int n2 = menu(2);
    soma(n1,n2);
    system("pause");
    return 0;
}
