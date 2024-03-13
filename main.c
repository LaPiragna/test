#include <stdio.h>
#include <string.h>

void modifyString(char* str, char replacement[50]);

int main() {
    char str[50], str1[50];
    int numero = 30;
    printf("Enter a string: ");
    scanf("%s", &str1);
    modifyString(str, str1);
    printf("Modified string: %s\n", str);

    return 0;
}

void modifyString(char* str, char replacement[50]) {
    strcpy(str, replacement);
}
