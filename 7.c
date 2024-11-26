#include <stdio.h>

int ContaCaractere(char s[], char c) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char string[100], caractere;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("O caractere '%c' aparece %d vezes.\n", caractere, ContaCaractere(string, caractere));

    return 0;
}
