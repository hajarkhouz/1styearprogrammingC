#include<stdio.h>
#include<stdlib.h>
int main()
{
	int T[50][50];
	int i,j,l,c;
	
	do{
		printf("saisir les dimensions du tableau:");
		scanf("%d%d", &l, &c);
		
	}while(l>50|| l<=0 ||c>50||c<=0);
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			
			printf("T[%d][%d]=",i,j);
			scanf("%d",&T[i][j]);
		}
	}
	/*afficher la diagonale d'une matrice*/
	/*methode 1:*/
	for(i=0;i<l;i++){

		for(j=0;j<c;j++){
		if(i==j){
		
		printf("T[%d][%d]",i,j);
		}
	}
	/*methode 2:*/
		}
		for(j=0;j<c;j++){
			printf("T[%d][%d]",j,j);
			
		}
		for(i=0;i<l;i++){
			if(i%2 !=0){
				for(j=1;j<c;j++){
					
				}
			}
			
		}
		
		
		
		
		
	return 0;
}

