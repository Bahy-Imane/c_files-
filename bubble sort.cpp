#include<stdio.h>

int bubble_sort (int N[],int taille){
	int T;
	for (int i=0;i<taille;i++){
		for (int j=0;j<(taille-1);j++){
			if (N[j]>N[j-1])
		    T = N[j];
			N[j] = N[j-1];
			N[j-1] = T;
		}
	}
	
}
int main (){
	int T[]={8,6,2,5};
	int taille = 4;
	printf ("le tableau avant le tri :\n");
	for (int i = 0;i<taille ;i++)
	printf ("T[%d] = %d\n",i,T[i]);
	printf ("le tableau apres le tri :")
	printf ("T[%d] = %d\n",i,bubble_sort());
	
	return 0;
	
}
