#include <iostream>
using namespace std;

// Reference is an alias for a variable
string food = "Pizza";

// Create a referenc variable
string &meal = food;

int main(){

    cout << food << "\n";
    cout << &food << "\n";
    cout << meal << "\n";
    cout << &meal << "\n";
    return 0;
}