#include <stdio.h>

void viraMaiuscula(char *string, int len);

int main(){
    char osso[5] = "osso\0";
    viraMaiuscula(osso, 5);
    printf("%s",osso);
}

void viraMaiuscula(char *string, int len){
    for(int i = 0; i < len; i++){
        if(string[i] > 96 && string[i] < 122)
            string[i] -= 32; 
    }
}