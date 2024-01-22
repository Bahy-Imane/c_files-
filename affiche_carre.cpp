#include<stdio.h>

int affiche_carre (int N[],int taille){
	for (int i=0;i<=taille;i++)
	{
		N[i]=N[i]*N[i];
	}
    	 

	return N[taille];
}

int main (){
	int T[] = {5,2,9,4};
	int taille = 3;
	int i ;
	
	printf ("le tableau :\n");
	for (int i=0;i<taille;i++)
	{
			printf ("T [%d] = %d\n",i,T[i]);
	}
	
	int R[]=affiche_carre(T[],taille);
	printf ("afficher le carre :\n");
	
	for (i=0;i<taille;i++)
	printf ("T[%d] = %d\n",i,R[i]);
	
	return 0;
}
