//WRITE A PROGRAMME IN C TO CHECK THE NUMBER IS COMPLETE SQUARE OR NOT

#include <stdio.h>
#include <math.h>

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    int sqr = sqrt(num);
    if (sqr * sqr== num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}

