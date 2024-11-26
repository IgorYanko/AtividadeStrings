#include <stdio.h>

int main() {
    char string1[30], string2[30], string3[30];

    printf("Digite uma string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("String digitada: %s", string1);

    printf("Digite a primeira string: ");
    fgets(string2, sizeof(string2), stdin);
    printf("Digite a segunda string: ");
    fgets(string3, sizeof(string3), stdin);
    printf("%s", string2);
    printf("%s", string3);

    return 0;
}