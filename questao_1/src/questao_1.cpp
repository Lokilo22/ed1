#include <stdio.h>
#include <conio.h>

int main(){
    
    char ch;
    do
    {
        printf("Digita qualquer carecter: ");
        ch = getch();
        fflush(stdin);
        printf("\n");
        printf("Caracter: %c|Dec. ASCII: %d \n ", ch, ch);

    } while (ch != 27);

    
    
}