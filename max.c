#include <stdio.h>
#include <stdlib.h>

int maxEl(int *v, int indMax, int indEl, int lastInd){
    while (indEl <= lastInd){
    if (v[indEl] > v[indMax]){
        return maxEl(v, indEl, indEl+1, lastInd);
    }
    else {
        return maxEl(v, indMax, indEl+1, lastInd);
    }
}

return v[indMax];
}

int main (){
    int v[] = {13, 89, 22, 7, 800, 180};
    int res = maxEl(v, 0, 1, 5);
    printf("%d", res);
    return 0;
}