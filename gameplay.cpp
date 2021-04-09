#include "include.h"

int convertirPositionMajusculeOrdonne(char a){
    for(int i=0;i<A;i++){
        if(a == alphabetMaj[i])
            return i;
    }
    return 0;
}


int convertirPositionMinisculeAbscisse(char b){
    for(int i=0;i<A;i++){
        if(b == alphabet[i])
            return i;
    }
    return 0;
}

/*//////////////////////////////////////////////////////////////////////*/

int supprimerLigneHorizontale(int n, int tableau[][A]){

        int mult = 0;
        for(int j=0;j<A;j++){
            if(tableau[n][j] == 1){
                mult++; 
                tableau[n][j] = 0;
            } 
        }
    return mult;
}


int supprimerLigneVerticale(int n, int type, int tableau[][A]){
        int mult = 0;
        int i;
        for(int i=0;i<type;i++){
            if(tableau[i][n] == 1){
                mult++; 
                tableau[i][n] = 0;
            }      
        }
    return mult;
}
/*//////////////////////////////////////////////////////////////////////*/

void descendre(int tableau[][A],int forme, int n){
    for(int j=0;j<A;j++){
        if(tableau[n-1][j] == 1){
            descendreColonne(tableau,forme,n-1,j);
            
        }     
    }
}


void descendreColonne(int tableau[][A], int forme, int n, int j){
  int nouveau = 0;
  for(int i=n;i>=0;i--){
    if(tableau[i][j] == 1){
      tableau[i][j] = 0;
      int o = n;
      while(1){
        if(nouveau){
          tableau[nouveau][j] = 1;
          nouveau = nouveau-1;
          break;
        }
        if((tableau[o+1][j] == 1) || (tableau[o+1][j] == 3)){
          tableau[o][j] = 1;
          nouveau = o-1;
          break;
        }
        if(o+1 == forme){
          tableau[o][j] = 1;
          nouveau = o-1;
          break;
        }
        o++;
      }
    }
  }
}

/*//////////////////////////////////////////////////////////////////////*/

void placer(int tableau[][A], int forme){
    cout << endl << endl;
    char x,y;
    int abscisse = 0, ordonne = 0;
    while(1){
        while(1){
            cout << "Placer x : ";
            cin >> x;
            if(ft_is_letter(x)){
                x = tolower(x);
                if(existeMin(x))
                    break;
            }
        }
        while(1){
            cout << "Placer y : ";
            cin >> y;
            if(ft_is_letter(y)){
                y = toupper(y);
                if(forme == TRIANGLE){
                    if(appartientOrdonneTriangle(y))
                        break; 
                } else {
                    if(existeMaj(y))
                        break; 
                }
                
            }
        }
        abscisse = convertirPositionMinisculeAbscisse(x);
        ordonne = convertirPositionMajusculeOrdonne(y);
        if(possibleRemplir(abscisse,ordonne,tableau))
            break;
    }
    tableau[ordonne][abscisse] = 1;
} 


void placerForme(int tableau[][A], vector<vector<int> > vect, int a, int o){
    int x = vect.size(), y;
    for(int i=x-1,abscisse=a;i>=0;i--,abscisse--){
            y = vect[i].size();
            for(int j=0,ordonne=o;j<y;j++,ordonne++){
                if(vect[i][j] == 1)
                    tableau[abscisse][ordonne] = 1;
            }
    }
}
