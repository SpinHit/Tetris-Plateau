#include "include.h"

int pp(int a, int b){
    if(a>b)
        return b;
    else
        return a;
}


bool ft_is_letter(char v){
    if ((v >= 'a' && v <= 'z') || (v >= 'A' && v <= 'Z' ))
        return true;
    else
        return false;
}


bool appartientOrdonneTriangle(char a){
    for(int i=0;i<TRIANGLE;i++){
        if(a == alphabetMaj[i])
            return true;
    }
    return false;
}

/*//////////////////////////////////////////////////////////////////////*/

bool existeMin(char a){
    for(int i=0; i<A; i++){
        if(a == alphabet[i])
            return true;
    }
    return false;
}


bool existeMaj(char a){
    for(int i=0; i<A; i++){
        if(a == alphabetMaj[i])
            return true;
    }
    return false;
}

/*//////////////////////////////////////////////////////////////////////*/

bool possibleRemplir(int x, int y, int tableau[][A]){
    if(tableau[x][y] == 3 || tableau[x][y] == 1){
        return false;
    } else {
        return true;
    }
}

/*//////////////////////////////////////////////////////////////////////*/

bool ligneHorizontaleRemplit(int n, int tableau[][A]){
    for(int i=0; i<A; i++){
        if(tableau[n][i] == 0)
            return false;
    }
    return true;
}


bool ligneVerticaleRemplit(int n, int type, int tableau[][A]){
    for(int i=0; i<type; i++){
        if(tableau[i][n] == 0)
            return false;
    }
    return true;
} 

/*//////////////////////////////////////////////////////////////////////*/

bool possiblePlacer(int tableau[][A], vector<vector<int> > vect, int a, int o){
    int x = vect.size(), y;
    for(int i=x-1,abscisse=a;i>=0;i--,abscisse--){
        if(a <= A){
            y = vect[i].size();
            for(int j=0,ordonne=o;j<y;j++,ordonne++){
                if(vect[i][j] == 1){
                    if(!(tableau[abscisse][ordonne] == 0))
                        return false;
                }
            }
        } else {
            return false;
        }
    }
    return true;
}