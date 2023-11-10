#include <iostream>
using namespace std;

int main(){

    char choose;
    double num1, num2, resultado;

    cout << "Escolha entre +, -, *, /" << endl;
    cin >> choose;
    cout << "Esoclhe um numero" << endl;
    cin >> num1;
    cout << "Escolhe outro numero" << endl;
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
        if (num2 != 0){
            resultado = num1 / num2;
        }else{
            cout << "Impossivel dividir por 0" << endl;
        }
        break;
    
    default:
        cout << "Impossivel resolver " << endl;
        break;
    }

    cout << "Resultado é " << resultado << endl;
    
    return 0;
}