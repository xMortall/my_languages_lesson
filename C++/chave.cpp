#include <iostream>
using namespace std;

int main() {
    int myArray[] = {1, 2};

    string letras2[5][10] = {
        {"1","2","3","4","5","6","7","8","9","10"},
        {"11","12","13","14","15","16","17","18","19","20"},
        {"21","22","23","24","25","26","27","28","29","30"},
        {"31","32","33","34","35","36","37","38","39","40"},
        {"41","42","43","44","45","46","47","48","49","50"}
    };

    string numeros3[1][12] = {
        {"1","2","3","4","5","6","7","8","9","10","11","12"}
    };

    bool continueGenerating = true;

    while (continueGenerating) {
        cout << "Números da sorte são: ";

        for (int i = 0; i < 5; i++) {
            int choice = rand() % 2; // 0 para letras2, 1 para numeros3

            if (choice == 0) {
                int row = rand() % 5;
                int column = rand() % 10;
                cout << letras2[row][column] << " ";
            } else {
                int column = rand() % 12;
                cout << numeros3[0][column] << " ";
            }
        }

        int firstStar = 1 + rand() % 12; // Estrela 1 na faixa de 1 a 12
        int secondStar = 1 + rand() % 12; // Estrela 2 na faixa de 1 a 12

        cout << "Estrelas: " << firstStar << " " << secondStar << endl;

        cout << "Gerar outra chave? (1 - Sim, 0 - Não): ";
        int generateNewKey;
        cin >> generateNewKey;

        if (generateNewKey != 1) {
            continueGenerating = false;
        }
    }

    return 0;
}
