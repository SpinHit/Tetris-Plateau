#include "include.h"

void afficherCercleLosange(int tableau[A][A]){
    cout << "    ";
    for(int i=0; i<A ;i++)
        cout << alphabet[i] << " ";
    cout << endl << "  ╔ ";
    for(int i=0; i<A ;i++)
        cout << "═" << " ";
    cout << "╗";
    for(int i=0; i<A; i++){
        cout << endl;
        cout << alphabetMaj[i] << " ║ ";
        for(int j=0; j<A ;j++){
            if(tableau[i][j] == 0)
                cout << "." << " ";
            if(tableau[i][j] == 1)
                cout << "■" << " ";
            if(tableau[i][j] == 3)
                cout << " " << " ";
        }
        cout << "║ ";
    }
    cout << endl << "  ╚ ";
    for(int i=0; i<A ;i++)
        cout << "═" << " "; 
    cout << "╝";    
    cout << endl << endl;
}


void afficherTriangle(int tableau[TRIANGLE][A]){
    cout << "    ";
    for(int i=0; i<A ;i++)
        cout << alphabet[i] << " ";
    cout << endl << "  ╔ ";
    for(int i=0; i<A ;i++)
        cout << "═" << " ";
    cout << "╗";
    for(int i=0; i<TRIANGLE; i++){
        cout << endl;
        cout << alphabetMaj[i] << " ║ ";
        for(int j=0; j<A ;j++){
            if(tableau[i][j] == 0)
                cout << "." << " ";
            if(tableau[i][j] == 1)
                cout << "■" << " ";
            if(tableau[i][j] == 3)
                cout << " " << " ";
        }
        cout << "║ ";
    }
    cout << endl << "  ╚ ";
    for(int i=0; i<A ;i++)
        cout << "═" << " "; 
    cout << "╝";
    cout << endl << endl;
}

/*//////////////////////////////////////////////////////////////////////*/

void afficherForme(vector<vector<int> > vect){
    for (int i = 0; i < vect.size(); i++) { 
        for (int j = 0; j < vect[i].size(); j++){
            if(vect[i][j] == 1)
            cout << "■" << " "; 
            if(vect[i][j] == 0)
            cout << " " << " ";
        }
        cout << endl; 
    }
}