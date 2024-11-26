#include <stdio.h>
#include <string.h>

void ConcatenarStrings(char s1[], char s2[], char resultado[]) {
    strcpy(resultado, s1);
    strcat(resultado, s2);
}

int main() {
    char string1[100], string2[100], resultado[200];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    string1[strcspn(string1, "\n")] = 0;
    string2[strcspn(string2, "\n")] = 0;

    ConcatenarStrings(string1, string2, resultado);
    printf("Strings concatenadas: %s\n", resultado);

    return 0;
}