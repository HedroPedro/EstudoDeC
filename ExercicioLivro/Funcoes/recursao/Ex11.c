#include <stdio.h>
#include <math.h>

int inverte(int x);

int main(void){
    printf("%i", inverte(1203));
}

int inverte(int x){
    if(x > 0){
        int i = 0;
        while (x/(int) pow(10,i) > 1)
            i++;
        return inverte(x/10) + ((int) pow(10,i) ) * (x % 10);
    }
    return 0;
}
