#include <stdio.h>

int main() {
    char character;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &character);

   

    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("IT IS A VOWEL");
            break;
        default:
            printf("IT IS A CONSTANT");
            break;
    }

    return 0;
}

