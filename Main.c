#include <stdio.h>
#include <math.h>

int a, b, c;

int main(){
    printf("inserte el primer numero\n");
    scanf("%d",&a);
    printf("inserte el segundo numero\n");
    scanf("%d",&b);

    c = a * b;

    printf("El producto entre %d y %d es: %d", a, b, c);
}