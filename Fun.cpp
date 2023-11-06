#include <iostream>

using namespace std;

int main() {
    char operacao;
    double numero1, numero2, resultado;
    bool continuar = true;

    while (continuar) {
        cout << "Digite 's' para calcular, 'q' para sair: ";
        cin >> operacao;

        if (operacao == 'q' || operacao == 'Q') {
            continuar = false;
            break;
        }

        if (operacao != 's' && operacao != 'S') {
            cout << "Opção inválida. Digite 's' para calcular ou 'q' para sair." << endl;
            continue;
        }

        cout << "Digite a operação (+, -, *, /): ";
        cin >> operacao;

        cout << "Digite o primeiro número: ";
        cin >> numero1;

        cout << "Digite o segundo número: ";
        cin >> numero2;

        switch (operacao) {
            case '+':
                resultado = numero1 + numero2;
                cout << "Resultado: " << resultado << endl;
                break;
            case '-':
                resultado = numero1 - numero2;
                cout << "Resultado: " << resultado << endl;
                break;
            case '*':
                resultado = numero1 * numero2;
                cout << "Resultado: " << resultado << endl;
                break;
            case '/':
                if (numero2 != 0) {
                    resultado = numero1 / numero2;
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Erro: Divisão por zero!" << endl;
                }
                break;
            default:
                cout << "Operação inválida. Por favor, digite +, -, *, ou /." << endl;
        }
    }

    return 0;
}
