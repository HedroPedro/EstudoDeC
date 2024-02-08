#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("exemplo.bin", "wb");
    if(NULL == fp){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    
    fclose(fp);
    system("pause");
    return 0;
}