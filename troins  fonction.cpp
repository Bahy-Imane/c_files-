#include<stdio.h>

int add (int a,int b){
	int result;
	result = a+b;
	printf("%d",result);
}

int sous(int a,int b){
	int result;
	result = a-b;
	printf("%d",result);
 
}

int mult (int a,int b){
	int result;
	result = a*b;
	printf("%d",result);
}
	
int main(){
	int A , B;
	int choix;
	printf("saisir le nombre A :");
	scanf ("%d",&A);
	printf("saisir le nombre B :");
	scanf ("%d",&B);
	
	printf("choisir l'operation qui vous voullez :");
	scanf("%d",&choix);
	
	switch (choix){
		case 1 : add(A,B);
		        break ;
		case 2 : sous(A,B) ;
		        break ;  
		case 3 : mult(A,B) ;
		        break ; 
		default : printf ("ERROR !") ;
		        break ;
				     		     
	}
	return 0;
}
