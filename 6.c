#include <stdio.h>
#include <string.h>

void InvertString(char s[]) {
    int n = strlen(s) - 1;
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;
    InvertString(string);
    printf("String invertida: %s\n", string);

    return 0;
}
