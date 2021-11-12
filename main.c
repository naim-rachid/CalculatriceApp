#include <stdio.h>
#include <stdlib.h>

/* ce programme génère une app calculatrice */

// Menu de choisir le transcodage
/**
	* Conversion
				Décimal -> Binaire
				Décimal -> Héxa or Octa
*/

// Menu de choisir le type de l'opération
int menu(){
		int c;
		printf("\n------------------------------------------------------------------------------------------------");
		printf("\n---------------------- Bienvenu dans une app calculatrice en langage C -------------------------\n");
		printf("------------------------------------------------------------------------------------------------\n");
		printf("-------- 1-/ L'addition ------------------------------------------------------------------------\n");
		printf("-------- 2-/ La soustraction -------------------------------------------------------------------\n");
		printf("-------- 3-/ La multiplication -----------------------------------------------------------------\n");
		printf("-------- 4-/ La division -----------------------------------------------------------------------\n");
		printf("-------- 5-/ Le modulo -------------------------------------------------------------------------\n");
		printf("-------- 0-/ Exit ------------------------------------------------------------------------------\n");
		printf("------------------------------------------------------------------------------------------------\n");
		printf("Quelle est votre choix : ");
		scanf("%d", &c);
		printf("choix saisis est = %d \n", c);
		printf("------------------------------------------------------------------------------------------------\n");
		
		return c;
	}

// fonction fait l'addition de deux nombres
int addition(int a, int b) {
	int somme;
	somme = a + b;
	return somme;
}

// fonction fait la soustraction de deux nombres
int soustraction(int a, int b) {
	int resultS = a - b;
	return resultS;
}

// fonction fait la multiplication de deux nombres
int multiplication(int a, int b) {
	int resultM;
	resultM = a * b;
	return resultM;
}

// fonction fait la division de deux nombres
int division(int a, int b) {
	int resultD = a / b;
	return resultD;
}

// fonction fait le reste de la division de deux nombres
int modulo(int a, int b) {
	int	resteD = a % b;
	return resteD;
}

// Main principal
int main(int argc, char *argv[]) {
	int choix;
	do {
		choix = menu();
		
		switch (choix) {
			int a, b;
			case 1 : printf("------------ L'addition ------------\n");
					 int somme;
					 printf("Entrez a : ");
					 scanf("%d", &a);
					 printf("Entrez b : ");
					 scanf("%d", &b);
					 somme = addition(a, b);
					 printf("\t=> La somme de %d et %d est : %d", a, b, somme);
					 break;
			case 2 : printf("------------ La soustraction ------------\n");
					 int resultS;
					 printf("Entrez a : ");
					 scanf("%d", &a);
					 printf("Entrez b : ");
					 scanf("%d", &b);
					 resultS = soustraction(a, b);
					 printf("\t=> La soustraction de %d et %d est : %d", a, b, resultS);
					 break;
			case 3 : printf("------------ La multiplication ------------\n");
					 int resultM;
					 printf("Entrez a : ");
					 scanf("%d", &a);
					 printf("Entrez b : ");
					 scanf("%d", &b);
					 resultM = multiplication(a, b);
					 printf("\t=> La multiplication de %d et %d est : %d", a, b, resultM);
					 break;
			case 4 : printf("------------ La division ------------\n");
					 int resultD;
					 printf("Entrez a : ");
					 scanf("%d", &a);
					 printf("Entrez b : ");
					 scanf("%d", &b);
//					 resultD = division(a, b);
					 if (b != 0) {
					 	resultD = division(a, b);
						printf("\t=> La division de %d et %d est : %d", a, b, resultD);
					 } else {
					 	printf("\tMath error ! Impossible de faire la division par 0");
					 }
					 break;
			case 5 : printf("------------ Le modulo ------------\n");
					 int restD;
					 printf("Entrez a : ");
					 scanf("%d", &a);
					 printf("Entrez b : ");
					 scanf("%d", &b);
//					 restD = modulo(a, b);
					 if (b != 0) {
					 	restD = modulo(a, b);
						printf("\t=> La modulo de %d et %d est : %d", a, b, restD);
					 }  else {
						printf("\tMath error ! Impossible de faire le modulo par 0");
					 }
					 break;
			default : printf("\tVous avez quittez l'app quiz !");
		}
		
	} while (choix != 0);
	/*
	int a, b, somme;
	
	printf("Entrez a : ");
	scanf("%d", &a);
	printf("Entrez b : ");
	scanf("%d", &b);
	
	somme = addition(a, b);
	
	printf("\t=> La somme de %d et %d est : %d", a, b, somme);
	*/
	
	
	
	return 0;
}