#include <stdio.h>
#include <math.h>

int main(void)
{
    float A, B, C;
    printf("A:");
    scanf_s("%f", &A);

    printf("B:");
    scanf_s("%f", &B);

    printf("C:");
    scanf_s("%f", &C);

    float AC = abs(A - C);
    printf("AC:%f\n", AC);

    float BC = abs(B - C);
    printf("BC:%f\n", BC);

    printf("AC+BC:%f\n", AC * BC);

    return 0;
}