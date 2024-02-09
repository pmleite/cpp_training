#include <iostream>

using namespace std;

string x;

int arr[3][3] = {{1,5,3},
                 {2,5,1},
                 {7,5,9}};

/**
 * Exercicio #1 (15 minutos para completar)
 * 
 * Crie uma função capaz de ler os dados de uma matriz
 * quadrada de inteiros. Ao final da leitura o programa 
 * deverá imprimir o número da linha que contém o menor 
 * dentre todos os números lidos.
 */

/**
 * @brief Function that reads a square matrix of integers
 *        and prints the line with the lowest number
*/

//print the lower number in the matrix
void readMatrix(int array[][3], int size){
    int lower = array[0][0];
    int line = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
        if(array[i][j] < lower) {
            lower = array[i][j];
            line = i;
            }
        }
    }
    cout << "The lower number is: " << lower << endl;
   cout << "The line is: " << line << endl;
}

void showArr(int n){
    for (int l=0; l<=n-1; l++){
            for (int c=0; c<=n-1; c++){
                cout << arr[l][c]; 
            }
            cout << endl;
    }
}

/**
 * Crie um programa  capaz de multiplicar uma 
 * uma matriz bidimensional de inteiros por 
 * um dado número e criar uma nova matriz com o 
 * produto 
 * 
*/



int main(){
  system("clear");
 // readMatrix(arr, 3);
 // showArr(3);
}
