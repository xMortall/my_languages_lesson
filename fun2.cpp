#include <iostream>
using namespace std;

int main(){

    char choose;
    double resultado, numero1, numero2;

    cout << "Escolha entre +, -, *, / " << endl;
    cin >> choose;

    cout << "Escoha um numero" << endl;
    cin >> numero1;

    cout << "Escolha outro numero" << endl;
    cin >> numero2;

    switch (choose)
    {
    case '+':
    resultado = numero1 + numero2;
    cout << "Resultado é " << resultado << endl;
        break;
    case '-':
    resultado = numero1 - numero2;
    cout << "Resultado é " << resultado << endl;
        break;
    case '*':
    resultado = numero1 * numero2;
    cout << "Resultado é " << resultado << endl;
        break;
    case '/':
    resultado = numero1 / numero2;
    if (numero2 != 0){
    cout << "Resultado é " << resultado << endl;
    }else{
        cout << "Impossivel calcular" << endl;
    }
        break;
    
    default:
    cout << "Impossivel calcular" << endl;
        break;
    }

    return 0;
}
