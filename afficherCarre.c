#include<stdio.h>

int affiche_carre (int N[4],int taille){
	int i;
	for (i=0;i<=taille;i++){
        N[i]=N[i]*N[i];
	    printf ("T[%d] = %d\n",i,T[i]);
	}

}

int main (){
	int T[] = {5,2,9,4};
	int taille = 4;
	int i ;

	
	printf ("le tableau :\n");
	for (i=0;i<taille;i++)
	{
			printf ("T [%d] = %d\n",i,T[i]);
	}
	
	printf ("afficher le carre :\n");
	affiche_carre(T[i],taille);
	
	return 0;
}
