#include<stdio.h>

void greeting (char N[] ) {
   
    printf("BONJOUR %s",N);
}

int main(){
    char nom[20];
    
    printf(" veulliez entrer votre nom :");
    scanf("%s",&nom);
    greeting (nom);
    
    
    return 0;
}
