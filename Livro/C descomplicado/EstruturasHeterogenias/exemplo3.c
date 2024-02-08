#include <stdio.h>
#include <stdlib.h>

enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

enum escapes {retrocesso ='\b', tabulacao='\t', novalinha='\n'};

void enumTest(){
    enum semana s1, s2, s3;
    s1 = Segunda;
    s2 = Terca;
    s3 = s1+s2;
    printf("Domingo = %d\n", Domingo);
    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    printf("s3 = %d\n", s3);
}

int main(){
    enum escapes e = retrocesso;
    printf("Ola %c mundo %c!\n", e, e);
    e = tabulacao;
    printf("Ola %c mundo %c!\n", e, e);
    e = novalinha;
    printf("Ola%cmundo%c!", e, e);
}