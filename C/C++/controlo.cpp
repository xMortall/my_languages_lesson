#include "structures.h"


/**
* @brief Função que calcula a soma dos números até um determinade limite
* @param limite - int limete para a soma
* @return int soma dos numeros até ao limite
*/
int somaNumeros(int limite){
    int soma = 0;
    for(int x = 1; x <= limite; x++){
        soma += x;
    }
    return soma;
}

int getLimite(){
    int limite;
    cout << "Introduza o limite: ";
    cin >> limite;
    return limite;
}

int  main(){
    system(CLEAR_COMMAND);
    int limite;
    limite = getLimite();
    getLimite();
    cout << "Total: " << somaNumeros(limite) << endl;
    return 0;
}