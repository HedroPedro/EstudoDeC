#include <stdio.h>

enum meses{
    jan, fev, mar, abr, mai, jun, jul, agost, set, out, nov, dezem
};
int main(){
    int m;
    printf("Digite um mes: ");
    scanf("%i", &m);
    if(m > 12){
        m = m /12;
    }
    printf("%i\n", m);
    switch(m){
        case fev:
            printf("Tem 28 dias");
            break;

        case jan:
        case mar:
        case mai:
        case jul:
        case set:
        case nov:
            printf("Tem 31 dias");
            break;
        
        default:
            printf("Tem 30 dias");
    }
}