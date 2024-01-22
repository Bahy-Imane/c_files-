#include<stdio.h>

int affiche_carre (int N[],int taille){
	int i,R[taille];
	for (i=0;i<=taille;i++)
	{
		R[i]=N[i]*N[i];
	}
	
    printf("afficher le carre :\n");
	
	for (i=0;i<=taille;i++)
	{
		printf("T[%d] = %d\n",i,R[i]);	 
	}
}

int main (){
	int T[] = {5,2,9,4};
	int taille=3,i;
	
	printf ("le tableau :\n");
	for (i=0;i<=taille;i++)
	{
		printf("T [%d] = %d\n",i,T[i]);
	}
	
	affiche_carre(T[taille],taille);
	
	
	return 0;
}
