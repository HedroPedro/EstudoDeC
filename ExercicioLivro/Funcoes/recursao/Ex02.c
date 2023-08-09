#include <stdio.h>

int somatorio(int count);

int main(){
    printf("%i", somatorio(3));
}

int somatorio(int count){
    if(count == 1)
        return 1;
    else
        return count + somatorio(count-1);
}