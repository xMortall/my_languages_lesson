#include "structures.h"

 int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
double num;
    

void encontrarMenorLinha(int matriz[3][3], int size) {
    int menorNumero = matriz[0][0];                // Assumindo que o menor número é o primeiro elemento
    int linhaMenorNumero = 0;                      // Inicializa com a primeira linha
    

    // Intera sobre a matriz para encontrar o menor número e sua linha

    for (int i = 0; i < size ; ++i) {                  // Linha
        for (int j = 0; j < 3; ++j) {                 // Coluna
            if (matriz[i][j] < menorNumero)menorNumero = matriz[i][j]; {      
                menorNumero = matriz[i][j];        
                linhaMenorNumero = i;             
            }
        }
    }

    // Imprime o número da linha que contém o menor número

    cout << "The lower number is " << menorNumero << endl;
    cout << "The line is  " << linhaMenorNumero + 1 << endl;
}

void showArr(int n){
    

    for (int l=0; l<=n-1; l++){
        for (int c=0; c<=n-1; c++){
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }
}

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
    
    // encontrarMenorLinha(matriz,3);
    // showArr(3);
    multiplicarMatriz(matriz,3);

    return 0;
}