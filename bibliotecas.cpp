#include <iostream>

using namespace std;

// TV     NOME     VALOR(Opcional)
// int    xpto;
// int    abc=10;
// pessoa teste[];  

// int inteiros[] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// struct pessoa{
//     string nome;
//     int idade;
//     double peso;
// };

// pessoa pessoas[2];

int main(){

// pessoa paulo;

// paulo.nome="Paulo";
// paulo.idade=49;
// paulo.peso=64;

// pessoas[0]=paulo;

// pessoa filipe;
// filipe.nome="Filipe";
// filipe.idade=18;
// filipe.peso=60;

// pessoas[1] = filipe;

// cout << pessoas[1].nome << endl;

// for(int i = 0; i<10; i++) {
//     if (inteiros[i]%2 == 0){
//         cout << inteiros[i] << endl;
//     }
// }

// int x = 0;
// while(x < 10){
//     if (inteiros[x]%2 == 0){
//         cout << inteiros[x] << endl;
//     }
//     x++;
// }

// int f = 0;
// while(f < 2){
//     cout << pessoas[f].nome << endl;
//     cout << pessoas[f].idade << endl;
//     cout << pessoas[f].peso << endl;
//     f++;
// }

// cout << pessoas[0].idade + pessoas[1].idade << endl;
// cout << pessoas[0].nome << " " << pessoas[1].nome <<endl; 
// cout << pessoas[1].peso / 0.35 << endl; 

const double PI = 3.1416;
double raio;
double area;
double altura;


cout << "Qual e o raio do circulo? "; 
cin >> raio;

area = PI*(raio*raio);

cout << "Qual a altura do cilindro?";
cin >> altura;

cout << "o volume do cilindro " << area * altura;

}