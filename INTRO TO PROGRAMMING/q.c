/*write  a programmme in c to accepts one character  and depending on input grade,display
 the percentage according to this table    A for45%  B for40%  C for30%  D for25% using if else*/
#include <stdio.h>

int main() {
    char grade;
    printf("Enter a grade (A, B, C, or D): ");
    scanf(" %c", &grade); 

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
