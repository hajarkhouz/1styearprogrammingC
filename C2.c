#include<stdio.h>
#include<stdlib.h>

int main()
{
const float Pi=3.14;
float rayon ,surface;
printf("Veuillez saisir la valeur du rayon:");
scanf("%f" ,&rayon);

surface=rayon*rayon*Pi;
printf("l'aire du cercle est :%.2f",surface);

 
	return 0;
}
