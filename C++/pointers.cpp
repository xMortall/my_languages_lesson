#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string *ptr = &food;
    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    return 0;
}