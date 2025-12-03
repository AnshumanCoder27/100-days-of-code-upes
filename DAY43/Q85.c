//Reverse a string.

#include <stdio.h>

int main() {
    char str[200], rev[200];
    int i = 0, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[len] != '\0') {
        len++;
    }
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
