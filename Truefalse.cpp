#include<stdio.h>

bool test (int N){
	return ( N %2 !=0 );
}
    

int main(){
	int N;
	
	printf("saisir un nombre :");
	scanf("%d",&N);
	
	if( test(N) )
    	 printf("true");

    else
         printf("false");
         
         return 0;
    }
	

