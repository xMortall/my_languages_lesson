#include "structures.h"

char str; 
int i;

int main(){
    printf("Enter your family name: ");
    scanf("%79s", &str); 
    printf("Enter your age: ");
    scanf("%d", &i);
    printf("Mr. %s , %d years old. \n", &str, i);

    system("cls");
    return 0;
}