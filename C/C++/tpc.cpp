/*
* Crie um programa capaz de multiplicar uma
* linha de matriz bidimensional de inteiros por 
* um dado numero e criar uma nova matriz com o 
* produto
*/

#include "structures.h"

int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int num;

void multiplicarMatriz(int matriz[3][3], int n){
    cout << "Que numero queres multiplicar? " << endl;
    cin >> num;

 for (int l=0; l<=n-1; l++){
        for (int c=0; c<=n-1; c++){
            cout << matriz[l][c]* num << " ";
        }
        cout << endl;
    }
}

int main() {
    system("clear");
    multiplicarMatriz(matriz,3);

    return 0;
}