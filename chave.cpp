#include <iostream>
#include <random>

using namespace std;

int main() {
    char resposta;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distNum(1, 50);
    uniform_int_distribution<int> distEstrela(1, 12);

    do {
        system("clear"); 
        

        int numeros[5];
        int estrelas[2];

        
        for (int i = 0; i < 5; ++i) {
            numeros[i] = 0;
        }
        for (int i = 0; i < 2; ++i) {
            estrelas[i] = 0;
        }

        
        for (int i = 0; i < 5; ++i) {
            int num;
            bool duplicado;
            do {
                duplicado = false;
                num = distNum(gen);
                for (int j = 0; j < i; ++j) {
                    if (num == numeros[j]) {
                        duplicado = true;
                        break;
                    }
                }
            } while (duplicado);
            numeros[i] = num;
        }

        
        for (int i = 0; i < 2; ++i) {
            int estrela;
            bool duplicado;
            do {
                duplicado = false;
                estrela = distEstrela(gen);
                for (int j = 0; j < i; ++j) {
                    if (estrela == estrelas[j]) {
                        duplicado = true;
                        break;
                    }
                }
            } while (duplicado);
            estrelas[i] = estrela;
        }

        
        for (int i = 0; i < 4; ++i) {
            for (int j = i + 1; j < 5; ++j) {
                if (numeros[i] > numeros[j]) {
                    int temp = numeros[i];
                    numeros[i] = numeros[j];
                    numeros[j] = temp;
                }
            }
        }

        for (int i = 0; i < 1; ++i) {
            for (int j = i + 1; j < 2; ++j) {
                if (estrelas[i] > estrelas[j]) {
                    int temp = estrelas[i];
                    estrelas[i] = estrelas[j];
                    estrelas[j] = temp;
                }
            }
        }

        cout << "Chave do Euro Milhões: ";
        for (int i = 0; i < 5; ++i) {
            cout << numeros[i] << " ";
        }
        cout << "Estrelas: ";
        for (int i = 0; i < 2; ++i) {
            cout << estrelas[i] << " ";
        }
        cout << endl;

        cout << "Desejas gerar mais uma chave? (S/N) ";
        cin >> resposta;
    } while (resposta == 'S' || resposta == 's');

    return 0;
}
