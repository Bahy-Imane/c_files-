
#include <stdio.h>


int main(void)
{
    int a;
    int b;

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;

    for (int i = 2; i <= min; ++i)
        if (a % i == 0 && b % i == 0)
        {
            printf("Le plus petit diviseur de %d et %d est %d\n", a, b, i);
            break;
        }

    return 0;
}2
