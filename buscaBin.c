#include <stdio.h>

int binaria(int esq, int dir, int *v, int a){
    while(esq<=dir){
    int meio = esq+dir/2;
    if (v[meio]==a){
        return meio;
    }
    else if (a > v[meio]){
        return binaria(meio+1, dir, v, a);
    }
    else{
        return binaria(esq, meio-1, v, a);
    }
    }
}

int main(){
    int vetor[] = {1, 4, 8, 9};
    int achou = binaria (0, 3, vetor, 9);
    printf("%d", achou);
    
}