#include "structures.h"
using namespace std;

// Função para interpretar os dados do protocolo
void interpretarProtocolo(const string& protocolo) {
    // Verificar se o protocolo tem o formato esperado
    if (protocolo.length() < 26 || protocolo.substr(0, 2) != "0 -" || protocolo.substr(6, 3) != "24 -")
    {
        cout << "Formato de protocolo inválido." << endl;
        return;
    }

    // Extrair valores do protocolo
    string sensor = protocolo.substr(2, 4);
    string data = protocolo.substr(10, 16);
    string valor1 = protocolo.substr(27, 4);
    string valor2 = protocolo.substr(32, 8);
    string valor3 = protocolo.substr(41, 4);

    // Saída dos valores interpretados
    cout << "Sensor: " << sensor << endl;
    cout << "Data: " << data << endl;
    cout << "Valor 1: " << valor1 << endl;
    cout << "Valor 2: " << valor2 << endl;
    cout << "Valor 3: " << valor3 << endl;
}

int main() {
    // Exemplo de protocolo
    string protocolo = "0 - sensor 2701 24 - data, 0000,00000000,0000";

    // Interpretar o protocolo
    interpretarProtocolo(protocolo);

    return 0;
}
