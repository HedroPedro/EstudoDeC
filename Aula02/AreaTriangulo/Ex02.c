#include <stdio.h>

int main(){
    float base, altura, area;
    printf("Digite a base (em metros): ");
    scanf("%f", &base);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    area =  (altura*base)/2;
    printf("A area desse trinagulo e de %.2f", area);
}