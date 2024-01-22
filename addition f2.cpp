#include<stdio.h>

int add (int A, int B){
	int R;
	R = A+B;
	printf("la somme de a et b est : %d",R);
}
int main (){
	int a , b;
	
    printf("saisir le nombre a :");
	scanf("%d",&a);
	printf("saisir le nombre b :");
	scanf("%d",&b);
	
	add(a,b);
	
return 0;
}
