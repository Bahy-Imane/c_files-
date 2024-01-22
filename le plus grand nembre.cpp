#include<iostream>

int main()
{
	int nbr1,nbr2,nbr3,plusGrand;

    printf("enter numbers");
    scanf("%d,%d,%d",&nbr1,&nbr2,&nbr3);
    
    if(nbr1>=nbr2&& nbr1>=nbr3){
    	 printf("plusGrand,%d",nbr1);
	}else if(nbr2>=nbr1&& nbr2>=nbr3){
		printf("plusGrand,%d",nbr2);
	}
   else{
   	printf("plusGrand,%d",nbr3);
   }
    return 0;
    
}
