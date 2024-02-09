#include <iostream>

// int: inteiros
// double: ponto flutuante
// string: cadeia de caracteres
// bool: booleano
// char: caractere
// void: vazio

using namespace std;

// bool: true ou false -> 1 ou 0 > 1Byte (8bits)  00000000 -> 11111111
// char: 1Byte (8bits)  
// int : 4Bytes (32bits) 00000000 00000000 00000000 00000000
// double: 8Bytes (64bits) 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000
// float: 4Bytes (32bits) 00000000 00000000 00000000 00000000

string nome = "Joao";

int ano;

int x= 10;
int y= 20;

//Operadores aritmeticos
// + - * / % ++ --

//Operadores relacionais ou compração
// == != > < >= <=

//Operadores logicos
// && || !

//Operadores de atribuição
// = += -= *= /= %=

struct bingo
{
    int numero;
    bool estado;
    string letra;
};

bingo omeubingo[] = {};

int main()
{

    int n;

    for(n=0; n<10; n+=5){
        cout << n << endl;
    }

    return 0;
}

