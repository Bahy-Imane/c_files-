#include<stdio.h>

int permuter (int a, int b){
	int c;
	c = a;
	a = b;
	b = c;
	printf("les nouvelle valeurs de A et B sont : %d\n %d",a,b);
   
}
 
 int main (){
 	int A,B;
    printf("veuillez saisir deux entiers A et B :");
    scanf("%d %d",&A,&B);
 	permuter (A,B);
 
 }    
