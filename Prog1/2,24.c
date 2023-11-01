#include <stdio.h>

int main (){
    int numero;

    puts("Inserire un numero");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("%d è pari\n", numero);
    }
    else 
        printf("%d è dispari\n");
}