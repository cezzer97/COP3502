#include <stdio.h>
#include <string.h>

void ExchangeCharacters(char str[], int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void RecursivePermute(char str[], int k) {
    int j;
    if (k == strlen(str)) {
        printf("%s\n", str);
    } else {
        for (j = k; j < strlen(str); j++) {
            ExchangeCharacters(str, k, j);
            RecursivePermute(str, k + 1);
            ExchangeCharacters(str, j, k);
        }
    }
}

void Permute(char str[]) {
    RecursivePermute(str, 0);
}

int main() {
    char str[] = "abc";
    Permute(str);
    return 0;
}
