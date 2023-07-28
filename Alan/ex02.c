#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// Um exemplo loop com erro que foi concertado                                                //
// O exemplo estava errado, pois a variável iteradora (n) nao estava tendo adição de valores //
//para que a condição do loop se torne falsa                                                //
/////////////////////////////////////////////////////////////////////////////////////////////
int main(){

    int a, n = 1;
    while(n<100){
        n++; //a++
        //n ao invés de a
    }//Loop infito

    return n;
}