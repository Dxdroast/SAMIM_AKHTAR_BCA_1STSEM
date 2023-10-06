#include <stdio.h>

int main() {
    char grade;
    printf("Enter a grade (A, B, C, or D): ");
    scanf(" %c", &grade); // Notice the space before %c to consume any whitespace characters

    int percentage;

    if (grade == 'A'|| 'a') {
        percentage = 45;
    } else if (grade == 'B'|| 'b') {
        percentage = 40;
    } else if (grade == 'C'|| 'c') {
        percentage = 30;
    } else if (grade == 'D'||'d') {
        percentage = 25;
    } else {
        printf("Invalid grade entered.\n");
    }
        
    

    printf("Percentage: %d%%\n", percentage);

    return 0; 
}
