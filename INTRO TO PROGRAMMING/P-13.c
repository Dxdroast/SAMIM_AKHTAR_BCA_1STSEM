// Write a program in c to calculate the grade of the student according to specific marks:
// 95 to 100:AA
// 85 to 95:A+
// 70 to 85:A
// 60 to 70:B
// 45 to 60:C
// <45:D
#include <stdio.h>

int main() {
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100) {
        if (marks >= 95) {
            printf("Grade is: AA");
        } else if (marks >= 85) {
            printf("Grade is: A+");
        } else if (marks >= 70) {
            printf("Grade is: A");
        } else if (marks >= 60) {
            printf("Grade is: B");
        } else if (marks >= 45) {
            printf("Grade is: C");
        } else {
            printf("Grade is: D");
        }
    } else {
        printf("WRONG ENTRY! Please enter a valid marks value between 0 and 100.");
    }

    return 0;
}
