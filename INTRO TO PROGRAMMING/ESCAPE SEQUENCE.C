#include <stdio.h>

int main() {
    printf("Escape Sequences:\n");
    
    // Newline escape sequence
    printf("1. Newline: Hello\nWorld\n");

    // Tab escape sequence
    printf("2. Tab: Hello\tWorld\n");

    // Backspace escape sequence
    printf("3. Backspace: Hello\bWorld\n");

    // Carriage return escape sequence
    printf("4. Carriage Return: Hello\rOverwritten\n");

    // Horizontal tab escape sequence
    printf("5. Horizontal Tab: Hello\t\tWorld\n");

    // Vertical tab escape sequence
    printf("6. Vertical Tab: Hello\vWorld\n");

    // Alert (bell) escape sequence
    printf("7. Alert (Bell): Hello\aWorld\n");

    // Backslash escape sequence
    printf("8. Backslash: Hello\\World\n");

    // Single quote escape sequence
    printf("9. Single Quote: Hello\'World\n");

    // Double quote escape sequence
    printf("10. Double Quote: Hello\"World\"\n");

    // Octal escape sequence (ASCII value of 'A' is 65 in octal)
    printf("11. Octal Escape: Hello\x41World\n");

    // Hexadecimal escape sequence (ASCII value of 'B' is 66 in hexadecimal)
    printf("12. Hexadecimal Escape: Hello\x42World\n");

    return 0;
}

