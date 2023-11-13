#include <iostream>
using namespace std;



int main(){


    char choose;
    double num1, num2, resultado;

    cout << "Que tipo de conta quer fazer : +, -, *, /" << endl;
    cin >> choose;

    cout << "Escolhe um numero" << endl;
    cin >> num1;

    cout << "Escolha outro numero" << endl;
    cin >> num2;

    switch (choose)
    {
    case '+':
        resultado = num1 + num2;
        break;
        case '-':
        resultado = num1 - num2;
        break;
        case '*':
        resultado = num1 * num2;
        break;
        case '/':
        if(num2 !=0){
            resultado = num1 / num2;
        }else {
            cout << "Erro" << endl;
        }
        break;
    
    default:
        cout << "Erro" << endl;
        break;
    }

    cout << "Resultado é " << resultado << endl;



}