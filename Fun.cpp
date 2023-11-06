#include <iostream>
using namespace std;

int main(){

char choose;
double num1, num2, resultado;

cout << "Escolha entre +, -, *, / " << endl;
cin >> choose;

cout << "Escolha um numero" << endl;
cin >> num1;
cout << "Escolha outro numero" << endl;
cin >> num2;

switch (choose)
{
case '+':
    resultado = num1 + num2;
    cout << "O resultado é : " << resultado << endl;
    break;
    case '-':
    resultado = num1 - num2;
    cout << "O resultado é : " << resultado << endl;
    break;
    case '*':
    resultado = num1 * num2;
    cout << "O resultado é : " << resultado << endl;
    break;
    case '/':
    resultado = num1 / num2;
    if (num2 != 0){
        cout << "O resultado é : " << resultado << endl;
    }else{
        cout << "É impossivel resolver" << endl;
    }
    break;

default:
    cout << "impossivel resolver" << endl;
    break;
}
    return 0;
}