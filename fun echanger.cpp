#include<stdio.h>

int echanger (int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf ("la nouvelle valeur de A est : %d\n",a );
	printf ("la nouvelle valeur de B est : %d\n",b );
}

int main (){
	int A, B;
	
	printf("saisir le nombre a :");
	scanf("%d",&A);
	printf("saisir le nombre b :");
	scanf("%d",&B);
	
	echanger (A,B);
	
	return 0 ;
}

