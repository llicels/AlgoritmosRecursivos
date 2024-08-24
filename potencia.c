#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente){
    if (expoente == 0){
        return 1;
    }
    if (expoente > 0){
        return base*potencia(base, expoente-1);
    }
}

int main(int argc, char*argv[]){
    int bas = strtol(argv[1], NULL, 10);
    int exp = strtol(argv[2], NULL, 10);
    int res = potencia(bas, exp);
    printf("%d", res);
}