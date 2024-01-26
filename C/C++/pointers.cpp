#include <iostream>
using namespace std;

int main(){
    
    // Reference is an alias for a variable
    string food = "Pizza";
    // Create a referenc variable
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    return 0;
}