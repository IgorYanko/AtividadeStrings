#include <stdio.h>

void SubstituirCaractere(char s[], char antigo, char novo) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == antigo) {
            s[i] = novo;
        }
    }
}

int main() {
    char string[100], antigo, novo;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite o caractere a ser substituido: ");
    scanf(" %c", &antigo);

    printf("Digite o caractere substituto: ");
    scanf(" %c", &novo);

    SubstituirCaractere(string, antigo, novo);

    printf("String apos a substituicao: %s", string);

    return 0;
}
