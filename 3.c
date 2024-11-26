#include <stdio.h>

int StringLenght(char s[]) {
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') {
        i++;
    }
    return i;
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Comprimento da string: %d\n", StringLenght(string));

    return 0;
}
