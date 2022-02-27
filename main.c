#include "fct.h"

int main(int argc, char const *argv[])
{
	printf("Donnez le nombre de bus que vous avez besoin\n");
	scanf("%d", &nbb);

	saisie (parc, tours, stations, carnets, tickets);	printf("\n\n");
	affiche_bus (parc);		printf("\n\n");
	affiche_carnet (parc, tours, stations, carnets, tickets);	printf("\n\n");
	feuille_de_route (parc , tours , stations);		printf("\n\n");

	printf("Voulez vous modifier les données d'un bus (O/N) ?\n");
	scanf("%s", dec);

		if (strcmp (dec, "O") == 0)
			 a = recherche(parc);
			if (a >= 0)
				modifie (parc, tours, stations, carnets, tickets);
	passager (parc, tours, stations, carnets, tickets);
	
	recette_total (parc, tours);		
	return 0;
}