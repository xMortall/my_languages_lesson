#include "structures.h"

struct bolo {
    double preco;
    string nome;
    double peso;
};
bolo bolos []={};


int main(){

bolo meuProduto;

    meuProduto.preco = 10.00;
    meuProduto.nome = "Bolo de chocolate";
    meuProduto.peso = 1;
    return 0;

    bolos[0] = meuProduto;


      for (int i = 1; i <= 6; i++) {
        bolos[i] = meuProduto;
        cout << "Bolo " << i + 1 << ":" << endl;
        cout << "Preço: " << bolos[i].preco << endl;
        cout << "Nome: " << bolos[i].nome << endl;
        cout << "Peso: " << bolos[i].peso << endl;
        cout << endl;
}
}