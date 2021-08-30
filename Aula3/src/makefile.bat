rem 1) Apagar arquivos pre-existentes

del /f *.o *.exe

rem 2) Compilar cpp para obj

g++ -c Calculadora.cpp Main.cpp

rem 3) Ligar objs para gerar exe

g++ Calculadora.o Main.o -o Calculadora.exe

