#include<stdio.h>
#include<stdlib.h>
int main()
{
	int mat1[50][50], mat2[50][50], mat3[50][50];
	int i,j,ligne,col;
	
	printf("Combien de lignes et de colonnes?\n");
	scanf("%d%d",&ligne,&col);
	
	printf("\nEntrez la premiere matrice:\n");
	for(i=0; i < ligne; ++i)
		for(j = 0; j < col; ++j)
			scanf("%d",&mat1[i][j]);
			
	printf("\nEntrez la deuxieme matrice:\n");
	for(i = 0; i < ligne; ++i)
		for(j = 0; j < col; ++j)
			scanf("%d",&mat2[i][j]);
	
	printf("\nAddition de la matrice:\n");
	for(i = 0; i < ligne; ++i)
	{
		for(j=0; j < col; ++j)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d ",mat3[i][j]);
		}
		printf("\n");
	}
 
	return 0;
}
