#include <stdio.h>
#include <stdlib.h>

int R(int x){
    if (x==0){
        return 2;
    }
    return 2*R(x-1)-4;
}

int main(int argc, char*argv[]){
    int x = strtol(argv[1], NULL, 10);
    int res = R(x);
    printf("%d", res);
}