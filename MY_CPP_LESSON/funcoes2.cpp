#include <iostream>
using namespace std;

int main(){

    char choose;
    double num1, num2, result;

    cout << "Escolha entre + , - , * , /" << endl;
    cin >> choose;

    cout << "Escolha um numero" << endl;
    cin >> num1;

    cout << "Escolha outra numero" << endl;
    cin >> num2;

    switch (choose)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
    if (num2 !=0){
        result = num1 / num2;
    }else{
        cout << "Erro" << endl;
    }
        break;
    
    default: cout << "Erro" << endl;
        break;
    }

cout << "Resultado é " << result << endl;



    return 0;
}