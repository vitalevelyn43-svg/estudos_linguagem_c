#include <stdio.h>

int main() {
    float a, b;
    char o;

    scanf("%f %f %c", &a, &b, &o);

    switch(o) {
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            if(b != 0) {
                printf("%.2f", a / b);
            } else {
                printf("ERRO");
            }
            break;
        default:
            printf("Operador invalido");
            break;
    }

    return 0;
}
