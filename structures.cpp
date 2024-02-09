#include <iostream>

using namespace std;

// std::stof() - convert string to float
// std::stod() - convert string to double
// std::stold() - convert string to long double.

struct bolo{
    string nomeBolo;
    double pesoBolo;
    double precoBolo;
};

string nome, peso, preco;

int tamanho;

bolo bolos[]={};

void arrayDimension(bolo* a){
    cout << "Tamanho do array A: " << sizeof(a) << endl;
    cout << "Tamanho do array B: " << sizeof(a[0]) << endl;
    cout << (sizeof(a[0]) / sizeof(a))/3 << endl;
}

int main(){

    bolo produto;
    produto.nomeBolo    = "bolo de chocolate";
    produto.precoBolo   = 10;
    produto.pesoBolo    = 1;

    bolos[0]=produto;

    cout << "Olá! Vamos fazer a nossa receita!" << "\n";
    cout << "Que nome tem este bolo? ";
    cin >>  nome;
    cout << "Quanto custa este bolo? ";
    cin >> preco;
    cout << "Quanto pesa o bolo? ";
    cin >> peso;

    bolos[1].nomeBolo = nome;
    bolos[1].precoBolo = stod(preco);
    bolos[1].pesoBolo = stod(peso);

    cout << "O nome do teu bolo é este " << bolos[1].nomeBolo << endl;
    cout << "o preco do bolo é " << bolos[1].precoBolo << endl;
    cout << "O peso do teu bolo é " << bolos[1].pesoBolo << endl;

    for(int x=0; x<=1; x++){
        cout << "O nome do teu bolo é este " << bolos[x].nomeBolo << endl;
        cout << "o preco do bolo é " << bolos[x].precoBolo << endl;
        cout << "O peso do teu bolo é " << bolos[x].pesoBolo << endl;
    }

    return 0;
}