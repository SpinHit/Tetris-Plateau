
/** Includes nécessaires au fonctionnement du programme */
#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <sstream>
#include <fstream>
#include <cstdlib>

using namespace std;

/* Liste des constantes nécessaires au fonctionnement du programme */
const int A = 19, C = 0, TRIANGLE = 9, MILIEUTRIANGLE = 9;
const char alphabet[19] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s'};
const char alphabetMaj[19] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S'};
const int maxCercle = 32;
const int maxTriangle = 31;
const int maxLosange = 34;
/* UI.cpp */
/* Contient les fonctions déstinées à l'interface utilisateur  et à faciliter la saisie*/
int regles();
int menu();
int plateau();
void affichageModeUn();
void affichageModeDeux(int pla);
int verif();
int verifDeux(int n);
void defaite(int score);
int scores();
void merci();
void affichage_formesCercle();
void affichage_formesTriangle();
void affichage_formesLosange();
void ATH(int vie, int score);

/* generation.cpp */
/* Contient les fonctions permettants de générer les différents plateaux de jeu */
void genererTriangle(int tableau[TRIANGLE][A]);
void genererLosange(int tableau[A][A]);
void genererCercle(int tableau[A][A]);


/* verif.cpp */
/* Contient les fonctions  réalisants les tests nécessaires au fonctionnement du jeu */
int pp(int a, int b);
int getTaille();
bool ft_is_letter(char v);
bool appartientOrdonneTriangle(char a);

bool existeMin(char a);
bool existeMaj(char a);

bool possibleRemplir(int x, int y, int tableau[][A]);

bool ligneHorizontaleRemplit(int n, int tableau[][A]);
bool ligneVerticaleRemplit(int n, int forme, int tableau[][A]);

bool possiblePlacer(int tableau[][A], vector<vector<int> > vect, int a, int o);


/* affichage.cpp */
/* Contient les fonctions permettant d'afficher les différents plateaux de jeu */
void afficherCercleLosange(int tableau[A][A]);
void afficherTriangle(int tableau[TRIANGLE][A]);

void afficherForme(vector<vector<int> > vect);


/* gameplay.cpp */
/* Contient les fonctions permettant de gérer les évenements durant le jeu */
int convertirPositionMinisculeAbscisse(char b);
int convertirPositionMajusculeOrdonne(char a);

int supprimerLigneHorizontale(int n, int tableau[][A]);
int supprimerLigneVerticale(int n, int forme, int tableau[][A]);


void placer(int tableau[][A], int forme);
void placerForme(int tableau[][A], vector<vector<int> > vect, int a, int o);

void descendre(int tableau[][A],int forme, int n);
void descendreColonne(int tableau[][A], int forme, int n, int j);