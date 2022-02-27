#include <stdio.h>
#include <string.h>
#define C 30
#define NBC 2			
#define NBS 2
#define NBT 2
#define NBB 2
#define NBR 1
#define NBTI 2

int i, j, k, l, m, n, o, p, q, r, s;
int nbb;
char dec [1];
char idbr [C];
int pos;
int a;
int nbrpas [NBB];
int rec [NBB];
int recette ;
typedef struct {
		char idt [C];
		char eta [C];
	}ticket;
ticket tickets [NBTI];

typedef struct {
		char idc [C];
		int nbrti ;	
		ticket tickets [NBTI];		
	}carnet;
carnet carnets [NBC];	

typedef struct {
		char ids [C];
		char nms [C];	
		int npg;
	}station;
station stations [NBS];	

typedef struct {
		char pd [C];		//point de depart
		char pa [C];		//point d'arriver
		int nbrs ;			//nombre station
		station stations [NBS];
	}tour;
tour tours [NBT];	

typedef struct {
	char idb [C];			//immatriculation
	int nbrp ;				//nombre place
	int nbrc ;				//nombre carnet
	char nc [C];			//nom chauffeur
	char pnc [C];			//prenom chauffeur
	int nbrt ;				//nombre de tour
	int px;
	tour tours [NBT];
	carnet carnets [NBC];
}bus;
bus parc [NBB];

void saisie (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets []);

void affiche_bus (bus parc []);

void affiche_carnet (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets []);

void feuille_de_route (bus parc [], tour tours [], station stations []);

int recherche (bus parc []);

void modifie (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets []);

void passager (bus parc [], tour tours [], station stations [], carnet carnets [], ticket tickets []);

int recette_total (bus parc [], tour tours []);