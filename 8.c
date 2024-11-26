#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_espacos(char s[]) {
    int inicio = 0, fim = strlen(s) - 1;

    while (isspace(s[inicio])) inicio++;
    while (isspace(s[fim])) fim--;

    int j = 0;
    for (int i = inicio; i <= fim; i++) {
        s[j++] = s[i];
    }
    s[j] = '\0';
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    remover_espacos(string);
    printf("String sem espaços: '%s'\n", string);

    return 0;
}
