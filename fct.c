#include "fct.h"

void saisie (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets [])
{
	
	for (i = 0; i < nbb; ++i)
		{
			printf("Entrez le matricule et le nombre de place du bus numero %d\n", i+1);
			scanf("%s%d", parc[i].idb, &parc[i].nbrp);

			printf("Donnez le nom et prenom du chauffeur :\n");
			scanf("%s%s",parc[i].nc, parc[i].pnc);
		
			printf("Entrez le nombre de carnet du bus\n");
			scanf("%d", &parc[i].nbrc);

				for (j = 0; j < parc[i].nbrc; j++)
				{
					printf("Donnez le numero et le nombre de ticket du carnet %d:\n", j+1);
					scanf("%s%d", parc[i].carnets[j].idc, &parc[i].carnets[j].nbrti); 

						for (k = 0; k < parc[i].carnets[j].nbrti; k++)
						{
							printf("Entrez respectivement le numero et l`etat du ticket (disponible / vendu ) %d\n", k+1);
							scanf("%s%s", parc[i].carnets[j].tickets[k].idt, parc[i].carnets[j].tickets[k].eta);
						}
				}
			printf("Donnez le prix d\'un ticket \n");
			scanf("%d", &parc[i].px);		

			printf("Donnez le nombre de tour du bus\n");
			scanf("%d", &parc[i].nbrt);
				
				for (l = 0; l < parc[i].nbrt ; l++)
				{
					printf("Donnez respectivement le point de depart et le point d`arriver du bus \n");
					scanf("%s%s",parc[i].tours[l].pd, parc[i].tours[l].pa);

					printf("Entrez le nombre station entre %s %s \n",parc[i].tours[l].pd,parc[i].tours[l].pa);
					scanf("%d", &parc[i].tours[l].nbrs);

					for (m = 0; m < parc[i].tours[l].nbrs; m++)
					{
						printf("Donnez le numero et le nombre de passager de la stations %d\n", m+1);
						scanf("%s %d", parc[i].tours[l].stations[m].ids, &parc[i].tours[l].stations[m].npg);
					}
				}
				
		}

}



	/// ************   La fonction d'affichage de bus   ************ ///

void affiche_bus (bus parc [])
	{

	printf("		  /// *** La liste des bus *** ///\n");	
	printf(" __________________________________________________________________\n");
	printf("|Matricule           |chauffeur               |Nombre de place     |\n");
	printf("|____________________|________________________|____________________|\n");

		for (i = 0; i < nbb; ++i)
		{
	printf("|%s______________|%s %s_______________|%d_________________|\n", parc[i].idb, parc[i].nc, parc[i].pnc, parc[i].nbrp);
		}

	}




	/// ************   La fonction d'affichage de carnet   ************ ///

void affiche_carnet (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets [])
	{

		printf(" /// *** La liste des carnets *** ///\n");
		printf(" ______________________________________\n");
		printf("|Numero           |Nombre de ticket    |\n");
		printf("|_________________|____________________|\n");

			for (int i = 0; i < nbb; ++i)
				{
					for (j = 0; j < parc[i].nbrc ; ++j)
					{
						printf("|%s_______________|%d_________________|\n", parc[i].carnets[j].idc, parc[i].carnets[j].nbrti);				
					}
				}
	}	


	
		/// ************   La fonction d'affichage de feuille de route   ************ ///

void feuille_de_route (bus parc [], tour tours [], station stations [])
	{
		printf("	  /// *** La feuille_de_route *** ///\n");

			for (int i = 0; i <nbb ; ++i)
				{
					printf("Le bus numero %d de matricule %s \n", i+1, parc[i].idb);

					for (j = 0; j < parc[i].nbrt; ++j)
					{
						printf("tour %d \n", j+1);

							printf(" __________________________________________________________________\n");
							printf("|Point de depart     |Point d\'arriver        |Nombre de stations  |\n");
							printf("|%s_________________|%s___________________|%d___________________|\n", parc[i].tours[j].pd, parc[i].tours[j].pa, parc[i].tours[j].nbrs);
					}
				}
		
	}	


		/// ************   La fonction de recherche de bus   ************ ///

int recherche (bus parc [])

	{
		printf("Entrez le matricule du bus :\n");
		scanf("%s", idbr);

			pos = -1;
			
			for (n = 0; (n < nbb) && (pos == -1); n++)
				if (strcmp(idbr, parc[n].idb) == 0 )	
					pos = n+1;	
		return pos;		
	}	

		/// ************   La fonction de modification de données   ************ ///

void modifie (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets [])
	{
			
		printf("Donnez le nom et prenom du chauffeur :\n");
		scanf("%s%s", parc[pos].nc, parc[pos].pnc);

		printf("Entrez le nombre de carnet du bus\n");
		scanf("%d", &parc[pos].nbrc);

			for (j = 0; j < parc[pos].nbrc; j++)
			{
				printf("Donnez le numero et le nombre de ticket du carnet %d:\n", j+1);
				scanf("%s%d", parc[pos].carnets[j].idc, &parc[pos].carnets[j].nbrti);

					for (k = 0; k < parc[pos].carnets[j].nbrti; k++)
					{
						printf("Entrez respectivement le numero et l`etat du ticket %d (disponible / vendu ) \n", k+1);
						scanf("%s%s", parc[pos].carnets[j].tickets[k].idt, parc[pos].carnets[j].tickets[k].eta);
					}
			}
		printf("Donnez le prix d\'un ticket \n");
		scanf("%d", &parc[pos].px);	

			printf("Donnez le nombre de tour d`un bus\n");
			scanf("%d", &parc[pos].nbrt);
			
			for (l = 0; l < parc[pos].nbrt ; l++)
			{
				printf("Donnez respectivement le point de depart et le point d`arriver du bus \n");
				scanf("%s%s",parc[pos].tours[l].pd, parc[pos].tours[l].pa);

				printf("Entrez le nombre station entre %s %s \n",parc[pos].tours[l].pd, parc[pos].tours[l].pa);
				scanf("%d", &parc[pos].tours[l].nbrs);

				for (m = 0; m < parc[i].tours[l].nbrs; m++)
				{
					printf("Donnez le nombre de passager de la stations %d\n", m+1);
					scanf("%s %d",parc[i].tours[l].stations[m].ids, &parc[pos].tours[l].stations[m].npg);
				}
			}

				
	}			


void passager (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets [])
	{
		for (i = 0; i < nbb; i++)
		{
			for (l = 0; l < parc[i].nbrt; l++)
			{
				for (m= 0; m < parc[i].tours[l].nbrs; m++)
				{
						nbrpas[i] = nbrpas[i] + parc[i].tours[l].stations[m].npg;
						rec[i] = nbrpas[i] * parc[i].px;
				}
			}
			printf("Le nombre de passager transporté par le bus %d est  %d :\n", i, nbrpas[i]);
			printf("La recette journalier de ce bus est %d \n", rec[i]);
		}
	}


int recette_total (bus parc [], tour tours [])
	{
		for (i = 0; i < nbb; ++i)
		{
			recette = recette + rec[i];
		}
		return recette;
	}	
