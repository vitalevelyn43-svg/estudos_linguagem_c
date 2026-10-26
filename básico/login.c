#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) { 
    setlocale(LC_ALL, "Portuguese");

    char user[20];
    char pass[20];

    printf("Digitar o usuário:\n");
    scanf("%s", user);

    printf("Digitar a senha:\n"); 
    scanf("%s", pass);

    while(strcmp(user, "evelyn") != 0 || strcmp(pass, "Vital123.") != 0) { 
        printf("Usuário ou senha incorreto. Tente novamente!\n\n");
        
        printf("Digitar o usuário:\n");
        scanf("%s", user);

        printf("Digitar a senha:\n");
        scanf("%s", pass);
    }

    printf("\nLogin feito com sucesso!\n");

    return 0;
}
