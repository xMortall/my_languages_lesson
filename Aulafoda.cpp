#include <iostream>

using namespace std;

int main(){
    float first_grade;
    float second_grade;
    float third_grade;
    float media;
    cout << "Qual a primeira nota ? ";
    cin >> first_grade;

    if (first_grade > 10)
    {
        cout << "Tem de ser uma nota abaixo de 10! " << endl;
    }

    else
    {
    cout << "Qual a segunda nota ? ";
    cin >> second_grade;
    }

    if (second_grade > 10){
        cout << "Tem de ser uma nota abaixo de 10! " << endl;
    }

    else
    {
        cout << "Qual a terceira nota ? ";
        cin >> third_grade;
    }

    if (third_grade > 10)
    {
        cout << "Tem de ser uma nota abaixo de 10! " << endl;
    }

    else
    {
        media = (first_grade + second_grade + third_grade) / 3; 
        cout << "A media das tres notas é: " << media << " ! ";
    }
    return 0;
}