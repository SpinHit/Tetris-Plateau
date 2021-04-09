#include "include.h"

void genererTriangle(int tableau[TRIANGLE][A]){
    for(int i=0; i<TRIANGLE; i++){
        for(int j=0;j<A;j++){
            if(j >= MILIEUTRIANGLE - i && j <= MILIEUTRIANGLE + i){
                tableau[i][j] = C;
            } else {
                tableau[i][j] = 3;
            }
        }
    }
}


void genererLosange(int tableau[A][A]){
    for(int i=0; i<TRIANGLE; i++){
        for(int j=0;j<A;j++){
            if(j >= MILIEUTRIANGLE - i && j <= MILIEUTRIANGLE + i){
                tableau[i][j] = C;
            } else {
                tableau[i][j] = 3;
            }
        }
    }
    for(int i=TRIANGLE,v=TRIANGLE; i<A; i++,v--){
        for(int j=0;j<A;j++){
            if(j >= MILIEUTRIANGLE - v && j <= MILIEUTRIANGLE + v){
                tableau[i][j] = C;
            } else {
                tableau[i][j] = 3;
            }
        }
    }
}


void genererCercle(int tableau[A][A]){
    for(int i=0; i<TRIANGLE; i++){
        for(int j=0;j<A;j++){
            if(i == 0 || i == 1 || i == 2 || i == 17 || i == 18 || i == 19){
                if( j >= MILIEUTRIANGLE - (6+i) && j <= MILIEUTRIANGLE + (6+i)){
                    tableau[i][j] = C;
                } else {
                    tableau[i][j] = 3;
                }
            } else {
                tableau[i][j] = C;
            } 
        }
    }
    for(int i=TRIANGLE,v=TRIANGLE; i<A; i++,v--){
        for(int j=0;j<A;j++){
            if(i == 0 || i == 1 || i == 2 || i == 16 || i == 17 || i == 18){
                if( j >= MILIEUTRIANGLE - (6+v) && j <= MILIEUTRIANGLE + (6+v)){
                    tableau[i][j] = C;
                } else {
                    tableau[i][j] = 3;
                }
            } else {
                tableau[i][j] = C;
            } 
        }
    }
}
