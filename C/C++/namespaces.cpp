#include "structures.h"

int x = 10;

namespace first_space

{
    void func(){
        cout << "Inside First_space" << endl;
    }
}

namespace second_space
{
    void func(){
        cout << "Inside Second_space" << endl;
        
}
}

using namespace first_space;
int main(){
    cout << x << endl;
    func();
    second_space::func();
    return 0;
}