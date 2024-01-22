#include<stdio.h>

int Max_2(int A,int B){
    int Max = A;
    if (Max < B)
        Max = B;
   return Max;
}


int Max_4(int a,int b,int c,int d){
	int Max1,Max2;
	Max1 = Max_2(a,b);
	Max2 = Max_2(c,d);	
	
	printf("le max est %d",Max_2(Max1,Max2));
}


int main(){
	int N1,N2,N3,N4;
	
	printf("saisir les quatre entier :");
	scanf("%d %d %d %d",&N1, &N2, &N3, &N4);
    Max_4(N1,N2,N3,N4);
	
	return 0;
	
	
}
