#include <stdio.h>

float serieHarmonica(int num){
    if(num == 1)
        return 1;
    return (float) 1/num + (num-1);
}

int main(){
    printf("%f", serieHarmonica(2));
}

