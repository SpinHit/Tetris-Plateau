#include "include.h"

int regles()
{
    char s;
    cout << "\033[2J\033[1;1H";
    cout << endl << "  ╔═══════════════════════════════════════╗" << endl;
    cout <<         "  ║            Règles du jeu:             ║ "  << endl;
    cout <<         "  ╚═══════════════════════════════════════╝" << endl << endl;
    int ligne = 32;
    string line;
    ifstream f( "Règles.txt" );
    for (int i=0; i< ligne;i++)
    {
        getline(f,line);
        cout << line << endl;
    }
    cout << endl  << "═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════" << endl;
    cout << "Appuyez sur n'importe quelle touche pour revenir au menu principal" << endl;
    cin >> s;
    switch (s)
    {
        default:
            menu();
            break;
    }
    return 0;
}

int menu()
{
    int v;
    char c;

    cout << "\033[2J\033[1;1H";
    cout << endl  << "  ╔═══════════════════════════════════════╗" << endl;
    cout << "  ║      " << "\033[31m" <<  "■■■  "  << "\033[32m"  << "■■■  " <<"\033[34m" << "■■■"  << "\033[35m" << "  ■■■  "<<"\033[33m"<< "■"  <<"\033[36m" <<    "    ■■"   << "\033[0m" <<"      ║"<< endl;
    cout << "  ║      " << "\033[31m" <<   " ■   " << "\033[32m"  <<  "■■  " <<"\033[34m"<<  "  ■  "<< "\033[35m" << " ■ ■  " <<"\033[33m"<< "■"  <<"\033[36m" <<   "   ■"    << "\033[0m" <<  "        ║" <<endl;
    cout << "  ║      " << "\033[31m" <<   " ■   " << "\033[32m"  <<  "■■■  "<<"\033[34m"<<  " ■  " << "\033[35m" << " ■  ■ " <<"\033[33m"<<  "■" <<"\033[36m" <<  " ■■"    <<  "\033[0m" <<   "         ║" << endl;
    cout << "  ╚═══════════════════════════════════════╝" << endl << endl;

    cout << "  ╔═══════════════════════════════════════╗" << endl;
    cout << "  ║         Choisissez une action:        ║ "  << endl;
    cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
    
    cout << "  ╔═══════════════════════════════════════╗" << endl;
    cout << "  ║               1: CLASSIQUE            ║" << endl;
    cout << "  ║               2: LIBRE                ║" << endl;
    cout << "  ║               3: RÈGLES               ║" << endl;
    cout << "  ║               4: SCORES               ║" << endl;
    cout << "  ║                                       ║" << endl;
    cout << "  ║               0: QUITTER              ║" << endl;
    cout << "  ╚═══════════════════════════════════════╝" << endl << endl;

    
     while(true)
     {
         
        cin >> c;
        if (c < '0' || c > '4')
        {
            
             cout << "  ╔═══════════════════════════════════════╗" << endl;
             cout << "  ║     Veuillez entrer un chiffre!       ║" << endl;
             cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
             continue;
        }
         else
        {
            v = atoi(&c);
            switch (v)
            {
                case 1:
                    v = 1;
                    break;
                case 2:
                    v = 2;
                    break;
                case 3:
                    regles();
                    break;
                case 4:
                    scores();
                    break;
                case 0:
                    exit(0);
                    break;
            }
            return v;
        }
    }
    return v;
}


int plateau()
{
    int pla = 0;
        cout << "\033[2J\033[1;1H";
        cout << "  ╔═══════════════════════════════════════╗" << endl;
        cout << "  ║    Choisissez un plateau de jeu:      ║"  << endl;
        cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
        
        cout << "  ╔═══════════════════════════════════════╗" << endl;
        cout << "  ║               1: TRIANGLE             ║" << endl;
        cout << "  ║               2: LOSANGE              ║" << endl;
        cout << "  ║               3: CERCLE               ║" << endl;
        cout << "  ╚═══════════════════════════════════════╝" << endl << endl;

    while(1)
    {
        cin >> pla;
        if (pla <1 || pla >3)
        {
             cout << "  ╔═══════════════════════════════════════╗" << endl;
             cout << "  ║Veuillez entrer un chiffre entre 1 et 3║" << endl;
             cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
             continue;
        }
         else break;
    }
    
    cout << "════════════════════════════════════════════════════════════════════════════" << endl << endl;
    return pla;
}

void affichageModeUn(){
    cout << "  ╔═══════════════════════════════════════╗" << endl;
    cout << "  ║         Voici les formes:             ║" << endl;
    cout << "  ║                                       ║" << endl;
    cout << "  ║        Choisissez-en une parmis       ║" << endl;
    cout << "  ║ celles proposées en entrant 1, 2 ou 3 ║" << endl;
    cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
}

void affichageModeDeux(int pla){
  int n = 0;
  if(pla == 1)
    n = 31;
  if(pla == 2)
    n = 34;
  if(pla == 3)
    n = 32;
    cout << "  ╔═══════════════════════════════════════╗" << endl;
    cout << "  ║          Voici les formes:            ║" << endl;
    cout << "  ║                                       ║   " << endl;
    cout << "  ║        Choisissez-en une parmis       ║" << endl;
    cout << "  ║         les " << n << " formes proposées       ║     " << endl;
    cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
}

int verif()
{
    int nb;
     while(1)
     {
        
        cin >> nb;
        if (nb <1 || nb>3)

        {
             cout << "  ╔═══════════════════════════════════════╗" << endl;
             cout << "  ║Veuillez entrer un chiffre entre 1 et 3║" << endl;
             cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
             continue;
        }
         else break;
    }
    
    cout << "════════════════════════════════════════════════════════════════════════════" << endl << endl;
    return nb;
    
}

int verifDeux(int n)
{
    int nb;
     while(1)
     {
        
        cin >> nb;
        if (nb <1 || nb>n)

        {
             cout << "  ╔═══════════════════════════════════════╗" << endl;
             cout << "   Veuillez entrer un chiffre entre 1 et " << n << endl;
             cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
             continue;
        }
         else break;
    }
    
    cout << "════════════════════════════════════════════════════════════════════════════" << endl << endl;
    return nb;
    
}


void defaite(int score)
{
    string pseudo;
    
    cout << "\033[2J\033[1;1H";
    cout << endl << "  ╔═══════════════════════════════════════╗" << endl;
    cout <<         "  ║   \033[31m               PERDU!\033[0m               ║ "  << endl;
    cout <<         "  ╚═══════════════════════════════════════╝" << endl << endl;

    cout << "ENTREZ VOTRE NOM POUR ENREGISTRER VOTRE SCORE: " << endl;
    cin >> pseudo;
    string const nomFichier("scores.txt");
    ofstream monFlux(nomFichier.c_str(), ios::app);

    if(monFlux)    
    {
        monFlux << pseudo << ": " << score << " points" << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}


int scores()
{   
    char s;
    cout << "\033[2J\033[1;1H";
    cout << endl << "  ╔═══════════════════════════════════════╗" << endl;
    cout <<         "  ║         Scores les plus récents:      ║ "  << endl;
    cout <<         "  ╚═══════════════════════════════════════╝" << endl << endl;
    int ligne = 10;
    string line;
    ifstream f( "scores.txt" );
    for (int i=0; i< ligne;i++)
    {
        getline(f,line);
        cout << line << endl;
    }
    cout << endl  << "═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════" << endl;
    cout << "Appuyez sur n'importe quelle touche pour revenir au menu principal" << endl;
    cin >> s;
    switch (s)
    {
        default:
            menu();
            break;
    }
    return 0;
}

void merci()
{
    cout << "\033[2J\033[1;1H";
    cout << endl << "  ╔═══════════════════════════════════════╗" << endl;
    cout <<         "  ║           Merci d'avoir joué!         ║ "  << endl;
    cout <<         "  ╚═══════════════════════════════════════╝ " << endl;
}


void affichage_formesTriangle(void)
{
    
    cout << endl << "  ╔═══════════════════════════════════════╗" << endl;
    cout <<         "  ║  Pièces disponibles pour ce plateau   ║ "  << endl;
    cout <<         "  ╚═══════════════════════════════════════╝" << endl << endl;

    int ligne = 14;
    string line;
   
    ifstream f( "triangle.txt");
       
    for (int i=0; i< ligne;i++)
    {
        getline(f,line);
        cout << line << endl;
    }
	cout << endl;
}


void affichage_formesLosange(void)
{
    
    cout << endl << "  ╔═══════════════════════════════════════╗" << endl;
    cout <<         "  ║  Pièces disponibles pour ce plateau   ║ "  << endl;
    cout <<         "  ╚═══════════════════════════════════════╝" << endl << endl;

    int ligne = 22;
    string line;
   
    ifstream f( "losange.txt");
       
    for (int i=0; i< ligne;i++)
    {
        getline(f,line);
        cout << line << endl;
    }
	cout << endl;
}


void affichage_formesCercle(void)
{
    
    
    cout << endl << "  ╔═══════════════════════════════════════╗" << endl;
    cout <<         "  ║  Pièces disponibles pour ce plateau   ║ "  << endl;
    cout <<         "  ╚═══════════════════════════════════════╝" << endl << endl;

    int ligne = 22;
    string line;
   
    ifstream f( "cercle.txt");
       
    for (int i=0; i< ligne;i++)
    {
        getline(f,line);
        cout << line << endl;
    }
	cout << endl;
}


void ATH(int vie, int score)
{
    cout << "\033[2J\033[0;1H";
    cout << "  ╔═══════════════════════════════════════╗" << endl;
    cout << "  ║     Vies:              Score:         ║" << endl;
   
    cout << "          \033[31m"  << vie << "                 \033[32m "<< score << "\033[0m" << endl;
    cout << "  ╚═══════════════════════════════════════╝" << endl << endl;
        
}