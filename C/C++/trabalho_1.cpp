#include "structures.h"

int a,b;

int main(){
    cout << "Digite o valor a a: ";
    cin >> a;
    cout << "Digite o valor a b: ";
    cin >> b;
    cout << "O valor de a + b e: " << a+b << endl;
    cout << "O valor de a - b e: " << a-b << endl;
    cout << "O valor de a * b e: " << a*b << endl;
    if(b != 0){
    cout << "O valor de a / b e: " << a/b << endl;}
    else{
        cout << "Nao e possivel dividir por zero!" << endl; 
    }
    cout << "O valor de a % b e: " << a%b << endl;


    return 0;
}