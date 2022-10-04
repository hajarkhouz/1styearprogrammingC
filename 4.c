#include<stdio.h>
#include<stdlib.h>
int main()
{
	int produits;
	float prix ,ChiffreAff;
	
	printf("programme qui calcule le chiffre d'affaire\n");
	printf("Veuillez saisire le nombre de produits :");
	scanf("%d",&produits);
	
	printf("Veuillez saisire les prix :");
	scanf("%f",&prix);
	ChiffreAff=produits*prix;
	printf("Le chifrre d'affaire est :%.2f",ChiffreAff);
	return 0;
}
