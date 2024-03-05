/**
 * C++ Program to demostrate casting
*/

#include "structures.h"

const int NUM_CONST = 15;
int i = 0;

void showASCIITable(){
    for(int x = 33; x <= 127; x++){
        cout << (char)x << "\t";
        i++;
        if(i % NUM_CONST == 0 || i >= 94){
            cout << "\n";
        }
        
    }
}

int main(){
    system(CLEAR_COMMAND);
    showASCIITable();
    return 0;
}

















/*
    int i = 10;
    float f = 3.14;
    char c = 'a';

    // Cast implicito
    float f2 = i;
    char c2 = i;

    cout << "f2: " << f2 << endl;
    cout << "c2: " << c2 << endl;

    // Cast explicito
    int i2 = (int)f;
    int i3 = (int)c;
    */