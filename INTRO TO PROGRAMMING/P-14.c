// WAP IN C TO CALCULATE ALL THE ALGEBRIC IDENTITIES
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("ENTER THE VALUE OF A : \n");
    scanf("%f", &a);
    printf("ENTER THE VALUE OF B : \n");
    scanf("%f", &b);
    printf("ENTER THE VALUE OF C : \n");
    scanf("%f", &c);

    float s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13;

    s1 = pow(a, 2) + 2 * a * b + pow(b, 2);
    s2 = pow(a, 2) - 2 * a * b + pow(b, 2);
    s3 = pow(a + b, 2) - pow(b, 2);
    s4 = pow(a + b + c, 2);
    s5 = pow(a + b - c, 2);
    s6 = pow(a - b + c, 2);
    s7 = pow(a - b - c, 2);
    s8 = pow(a - b + c, 2);
    s9 = pow(a + b, 3);
    s10 = pow(a - b, 3);
    s11 = a * (pow(a, 2) - pow(b, 2)) + b * (pow(a, 2) - pow(b, 2));
    s12 = a * (pow(a, 2) + pow(b, 2)) - b * (pow(a, 2) + pow(b, 2));
    s13 = pow(a, 3) + pow(b, 3) + pow(c, 3) - 3 * a * b * c;

    printf("THE IDENTITY OF S_1=%f\n", s1);
    printf("THE IDENTITY OF S_2=%f\n", s2);
    printf("THE IDENTITY OF S_3=%f\n", s3);
    printf("THE IDENTITY OF S_4=%f\n", s4);
    printf("THE IDENTITY OF S_5=%f\n", s5);
    printf("THE IDENTITY OF S_6=%f\n", s6);
    printf("THE IDENTITY OF S_7=%f\n", s7);
    printf("THE IDENTITY OF S_8=%f\n", s8);
    printf("THE IDENTITY OF S_9=%f\n", s9);
    printf("THE IDENTITY OF S_10=%f\n", s10);
    printf("THE IDENTITY OF S_11=%f\n", s11);
    printf("THE IDENTITY OF S_12=%f\n", s12);
    printf("THE IDENTITY OF S_13=%f\n", s13);

    return 0;
}
