#include <stdio.h>

int main(int argc, char *argv[]) {
    int quantity;
    float product, sum = 0, discount;

    printf("Digite a quantidade de produtos que voce deseja:\n"); 
    scanf("%i", &quantity);

    for(int i = 1; i <= quantity; i++) { 
        printf("Digite o valor do produto %d:\n", i); 
        scanf("%f", &product); 
        sum += product;
    }

    if(sum > 200) {
        discount = sum * 0.8;
        printf("Com desconto ficou %.2f\n", discount);
    } else {
        printf("Sem desconto. Valor total ficou %.2f\n", sum);
    }

    return 0;
}
