#include<iostream>

int main ()
{
	int nombreMois;
	
	printf("enter le nombre de mois");
	scanf("%d", &nombreMois);
	
		switch (nombreMois) 
		{
	
		case 1 :printf("janvier");
	        	break;
	    case 2 :printf("fevrier");
	            break;
	    case 3 :printf("mars");
	            break;
		case 4 :printf("avril");
	            break;
		case 5 :printf("mai");
	            break;
		case 6 :printf("juin");
	            break;
		case 7 :printf("juillet");
	            break;
		case 8 :printf("aout");
	            break;
		case 9 :printf("septembre");
	            break;
		case 10 :printf("octobre");
	            break;
		case 11 :printf("novembre");
	            break;
		case 12 :printf("decembre");
	            break;	
		default :printf("error");
								
	}


    return 0;

}   
