#include<iostream>
 
 int main() {
   
    int nbr, mult, prd;

   
    printf("entrer un nombre : ");
    scanf("%d", &nbr);

    for (mult = 1; mult <= 10; mult++) {
        prd = nbr * mult;
        printf("%d x %d = %d\n", nbr, mult, prd);
    }

    return 0;
}
