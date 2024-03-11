#include "structures.h"

const float PI = 3.1415;
float xptop = 2.3;


int teste(){
    static int xpto = 3;
    return xpto;
}

int main(){
 
    int n = 0;
    while (n<=10)
    {
        cout << n << endl;
        n++;
    }
    

    cout << teste() << endl;


    int i = 1;
    float f= 2.1;
    
    float f2 = i;

    float x = (float)i*f;
    cout << (int)f << endl;
    string frase = "Olá este é o meu cast " + to_string(f);


    int xptop1 = 1;
    int xptop2 = 1;
    string xpto3 = "Olá Mundo";
    

    cout << xptop1 + xptop2 << endl;
    cout << to_string(xptop1) + to_string(xptop2) << endl;
    return 0;
}