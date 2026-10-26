#include <stdio.h>

int main(int argc, char *argv[]) { 
    int quantity, array[20], temp;

    printf("Quantos números você quer digitar:\n"); 
    scanf("%d", &quantity);

    if(quantity > 1 && quantity <= 20) {
        for(int i = 0; i < quantity; i++) {
            printf("Digite um número:\n");
            scanf("%d", &array[i]);
        }

        for(int i = 0; i < quantity - 1; i++) {
            for(int j = 0; j < quantity - 1; j++) {
                if(array[j] < array[j + 1]) {
                    temp = array[j]; 
                    array[j] = array[j + 1]; 
                    array[j + 1] = temp;
                }
            }
        }

        printf("\nNúmeros em ordem decrescente:\n");
        for(int i = 0; i < quantity; i++) { 
            printf("%d\n", array[i]);
        }
    } else {
        printf("Digite pelo menos 2 números (e no máximo 20).\n");
    }

    return 0;
}
