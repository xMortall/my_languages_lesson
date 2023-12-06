#include <iostream>
#include <cmath>
using namespace std;

int main(){


    cout << round(10.5) << "\n";

    int x = 1;
    int y = 2;
    cout << x << "\n";
    x +=2;
    cout << x << "\n";

    cout << (x|=y) << "\n";
    cout << (x==y) << "\n";

    string nomea = "Emanuel";
    string nomeb = "Borges";
    cout << (nomea+nomeb) << "\n";

    return 0;
}