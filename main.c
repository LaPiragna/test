#include <stdio.h>
#include <string.h>
#include <time.h>

void message(char *str, char *str1);

int main() {
    printf("Hello World!\n");
    printf("I am learning!\n");

    /* Message below actually was a merge in 'master' branch with 'test' branch. */
    printf("Changes on test branch* would be the correct description of this commit bro!~ bye!\n");

    printf("Commit made from git!\n");

    char str[100]; // Allocate memory for the strings
    char str1[100];

    printf("Enter a message: ");
    // fflush(stdin); // fflush on stdin is undefined behavior in C, should be avoided
    scanf("%99s", str1); // Limit input to prevent buffer overflow
    message(str, str1);
    printf("New message: %s.\n", str);

    return 0;
}

void message(char *str, char *str1) {
    strcpy(str, str1); // Copy the content of str1 to str
}
