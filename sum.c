#include <stdio.h>
#include <stdlib.h>

int sum(int *v, int indEl, int lastInd, int currentSum){

    if (indEl == lastInd){
        return v[indEl]+currentSum;
    }
    if (lastInd >= 0){
    return sum(v, indEl+1, lastInd, currentSum+v[indEl]);
    }else{return -1;};
    

}

int main (){
    int v[] = {4,5};
    int res = sum(v, 0, 1, 0);
    printf("%d", res);
    return 0;
}