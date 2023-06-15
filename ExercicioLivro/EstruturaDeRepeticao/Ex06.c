#include <stdio.h>
#include <unistd.h>

int main(){
    for(int i = 10; i > -1; i--){
        printf("%i...", i);
        sleep(1);
    }
    printf("FIM");
}