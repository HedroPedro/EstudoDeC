#include <stdio.h>

typedef union 
{
    short a;
    char b;
} dado;

int main(){
    dado d;
    d.a = 112;
    printf("%c", d.b);
}
