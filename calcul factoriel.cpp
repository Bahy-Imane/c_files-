#include<stdio.h>

int factoriel (int n){

	int rlt = 1;

	for (int i=1 ; i<=n ;i++)
		rlt =rlt * i;
		printf("%d",rlt);
	return rlt;
	}

int main (){
	int N;
	printf("saisir un nombre N :");
	scanf("%d",& N);
	factoriel(N);
	
	 return 0;
}
