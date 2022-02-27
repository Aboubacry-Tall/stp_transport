#include <stdio.h>
#include <string.h>
#define C 30
#define NBC 5 				//nombre 
#define NBS 3
#define NBT 100
#define NBB 100
#define NBR 100
#define N 100

int i, j, k, l, m, n, o, p, q, r, s;


typedef struct {
		char idt [C];
		char eta [C];
	}t_ticket;


typedef struct {
		char idc [C];
		int nbrti ;			//nombre tiket
		t_ticket tickets [NBT];
	}t_carnet;
t_ticket tickets [NBT];

typedef struct {
		char ids [C];
		char nms [C];		//nom d`un station
		int npg;
	}t_station;


typedef struct {
		char pd [C];		//point de depart
		char pa [C];		//point d'arriver
		int nbrs ;			//nombre station
		t_station stations [NBS] ;
	}t_tour;
t_station stations [NBS] ;

typedef struct {
	char idb [C];		//immatriculation
	int nbrp ;			//nombre place
	int nbrc ;			//nombre carnet
	char nc [C];		//nom chauffeur
	char pnc [C];		//prenom chauffeur
	int nbrt ;			//nombre de tour
	int px;
	t_carnet carnets [NBC];
	t_tour tours [NBR];
}t_bus;



typedef struct
	{
		int nbrb;
		t_bus buss [NBB];
	}t_parc;


t_parc parcm;
t_bus busm;
t_carnet carnetm;
t_tour tourm;