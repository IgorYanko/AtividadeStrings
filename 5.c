#include <stdio.h>
#include <ctype.h>

void Uppercase(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}

void Lowercase(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Maiuscula: ");
    to_uppercase(string);
    printf("%s", string);

    printf("Minuscula: ");
    to_lowercase(string);
    printf("%s", string);

    return 0;
}
