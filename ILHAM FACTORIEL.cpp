#include <stdio.h> 
 
int factoriel(int n){
    int r= 1;

    for (int i=1 ;i<=n ;i++)
    r = r*i;
    printf("%d",r);
    return r;
}


int main(){
    int n;
    printf("entrer un nombre :");
    scanf("%d",&n);

    factoriel(n);

    return 0;
}

