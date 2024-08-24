#include <stdio.h>
#include <stdlib.h> 

int calc(int num, int digit){
    if(num != 0){
        int a = num % 10;
        num = num / 10;
        calc(num, digit+a);
    }
    else{return digit;};
}

int main(int argc, char *argv[]){
    int num = strtol(argv[1], NULL, 10);
    int res = calc(num, 0);
    printf("%d", res);
}