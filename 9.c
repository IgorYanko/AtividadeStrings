#include <stdio.h>
#include <string.h>

int IsPalindromo(char s[]) {
    int n = strlen(s) - 1; 
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    if (IsPalindromo(string)) {
        printf("A string eh um palindromo.\n");
    } else {
        printf("A string não eh um palindromo.\n");
    }

    return 0;
}
