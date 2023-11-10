#include <iostream>
using namespace std;

int myArray[] = { 1, 2, 3, 4, 5 };

string letras[2][4];

char letras2[3][33] = {
    {'A','B','C','D'},
    {'E','F','G','H'}
};

int main(){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
        cout << letras2[i][j] << endl;
        }
    }

    cout << "teste" << endl;

    return 0;
};

void ola(string msg){

    cout << msg << endl;
    
}

