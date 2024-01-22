#include<iostream>

int main()
{
	int age;
	
	printf("entrer age");
	scanf("%d",&age);
	
	if(age>=6 && age<=7)
	{
	printf("poussin");	
	}
	else if (age>=8 && age<=9)
	{
		printf("pupille.");
	}
	else if (age>=10 && age<=11)
	{
		printf("minime.");
	}
	else if (age >= 12)
	{
		printf("cadet.");
	}
	else {
		printf("introuvable");
	}
		

	
	return 0;
}
