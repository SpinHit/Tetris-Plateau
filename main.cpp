#include "include.h"
#include "formeStandard.h"
#include "formeCercle.h"
#include "formeTriangle.h"
#include "formeLosange.h"




int main(){
  int pla = 0;
  int type = 0;
  int choix = 0;
  int mode = 0;
  int score = 0;
  int bonus = 10;
  int mult = 0;
  int malus = (20 * bonus);


  mode = menu();
  pla = plateau();
 
  if(pla <=3 && pla >=1){
    if(pla == 1)
      type = TRIANGLE;
      if(pla == 2 || pla == 3)
         type = A;
  }


  int tableau[type][A];
  if(pla == 1)
    genererTriangle(tableau);
  if(pla == 2)
    genererLosange(tableau);
  if(pla == 3)
    genererCercle(tableau);

  formeStandard forme;  

  char aa , bb;
  int a = 0;
  int b = 0;
  int d = 0;
  int vie = 3;
  int temp = 1;

  vector<vector<int>> formeAleatoire1;
  vector<vector<int>> formeAleatoire2;
  vector<vector<int>> formeAleatoire3;
  int valeur1 = 0, valeur2 = 0,valeur3 = 0;
  while(1){

      if(mode == 1){ 
        
          if(pla == 1){
            formeTriangle formeT;
              if(temp == 1){
                  srand (time(NULL));
                  valeur1 = rand() % formeT.getTaille() + 1;

                  if(valeur1 > 20){
                          formeAleatoire1 = formeT.getVec(valeur1);
                      } else {
                          formeAleatoire1 = forme.getVec(valeur1);
                  }

                  valeur2 = rand() % formeT.getTaille() + 1;
                  if(valeur2 > 20){
                          formeAleatoire2 = formeT.getVec(valeur2);
                      } else {
                          formeAleatoire2 = forme.getVec(valeur2);
                      }

                  valeur3 = rand() % formeT.getTaille() + 1;
                  if(valeur3 > 20){
                          formeAleatoire3 = formeT.getVec(valeur3);
                      } else {
                          formeAleatoire3 = forme.getVec(valeur3);
                      }
                  temp = 0;
              }

              if(d == 1){
                  srand (time(NULL));
                  valeur1 = rand() % formeT.getTaille() + 1;
                  if(valeur1 > 20){
                      formeAleatoire1 = formeT.getVec(valeur1);
                  } else {
                      formeAleatoire1 = forme.getVec(valeur1);
                  }
              }

              if(d == 2){
                  srand (time(NULL));
                  valeur2 = rand() % formeT.getTaille() + 1;
                  if(valeur2 > 20){
                      formeAleatoire2 = formeT.getVec(valeur2);
                  } else {
                      formeAleatoire2 = forme.getVec(valeur2);
                  }
              }
              if(d == 3){
                  srand (time(NULL));
                  valeur3 = rand() % formeT.getTaille() + 1;
                  if(valeur3 > 20){
                      formeAleatoire3 = formeT.getVec(valeur3);
                  } else {
                      formeAleatoire3 = forme.getVec(valeur3);
                  }
              }   
          }

          if(pla == 2){

              formeLosange formeL;

              if(temp == 1){
                  srand (time(NULL));

                  valeur1 = rand() % formeL.getTaille() + 1;
                  if(valeur1 >20){
                      formeAleatoire1 = formeL.getVec(valeur1);
                  } else {
                      formeAleatoire1 = forme.getVec(valeur1);
                  }

                  valeur2 = rand() % formeL.getTaille() + 1;
                  if(valeur2 >20){
                      formeAleatoire2 = formeL.getVec(valeur2);
                  } else {
                      formeAleatoire2 = forme.getVec(valeur2);
                  }

                  valeur3 = rand() % formeL.getTaille() + 1;
                  if(valeur3 >20){
                      formeAleatoire3 = formeL.getVec(valeur3);
                  } else {
                      formeAleatoire3 = forme.getVec(valeur3);
                  }
                  temp = 0;
              }
              
              if(d == 1){
                  srand (time(NULL));
                  valeur1 = rand() % formeL.getTaille() + 1;
                  if(valeur1 >20){
                      formeAleatoire1 = formeL.getVec(valeur1);
                  } else {
                      formeAleatoire1 = forme.getVec(valeur1);
                  }
              }
              if(d == 2){
                  srand (time(NULL));
                  valeur2 = rand() % formeL.getTaille() + 1;
                  if(valeur2 >20){
                      formeAleatoire2 = formeL.getVec(valeur2);
                  } else {
                      formeAleatoire2 = forme.getVec(valeur2);
                  }
              }
              if(d == 3){
                  srand (time(NULL));
                  valeur3 = rand() % formeL.getTaille() + 1;
                  if(valeur3 >20){
                      formeAleatoire3 = formeL.getVec(valeur3);
                  } else {
                      formeAleatoire3 = forme.getVec(valeur3);
                  }
              }
          }

          if(pla == 3){

              formeCercle formeC;

              if(temp == 1){
                  srand (time(NULL));

                  valeur1 = rand() % formeC.getTaille() + 1;
                  if(valeur1 >20){
                      formeAleatoire1 = formeC.getVec(valeur1);
                  } else {
                      formeAleatoire1 = forme.getVec(valeur1);
                  }

                  valeur2 = rand() % formeC.getTaille() + 1;
                  if(valeur2 >20){
                      formeAleatoire2 = formeC.getVec(valeur2);
                  } else {
                      formeAleatoire2 = forme.getVec(valeur2);
                  }

                  valeur3 = rand() % formeC.getTaille() + 1;
                  if(valeur3 >20){
                      formeAleatoire3 = formeC.getVec(valeur3);
                  } else {
                      formeAleatoire3 = forme.getVec(valeur3);
                  }
                  temp = 0;
              }
              
              if(d == 1){
                  srand (time(NULL));
                  valeur1 = rand() % formeC.getTaille() + 1;
                  if(valeur1 >20){
                      formeAleatoire1 = formeC.getVec(valeur1);
                  } else {
                      formeAleatoire1 = forme.getVec(valeur1);
                  }
              }

              if(d == 2){
                  srand (time(NULL));
                  valeur2 = rand() % formeC.getTaille() + 1;
                  if(valeur2 >20){
                      formeAleatoire2 = formeC.getVec(valeur2);
                  } else {
                      formeAleatoire2 = forme.getVec(valeur2);
                  }
              }

              if(d == 3){
                  srand (time(NULL));
                  valeur3 = rand() % formeC.getTaille() + 1;
                  if(valeur3 >20){
                      formeAleatoire3 = formeC.getVec(valeur3);
                  } else {
                      formeAleatoire3 = forme.getVec(valeur3);
                  }
              }
          }
    }

    ATH(vie, score);
    
    if(mode == 1){
      affichageModeUn();
      afficherForme(formeAleatoire1);
      cout << endl;
      afficherForme(formeAleatoire2);
      cout << endl;
      afficherForme(formeAleatoire3);
      cout << endl;
    }
    if(mode == 2){
      affichageModeDeux(pla);
      switch (pla)
      {
        case 1:
            affichage_formesTriangle();
            break;
        case 2:
            affichage_formesLosange();
            break;
        case 3:
            affichage_formesCercle();
            break;
      }
    }

    if(type == TRIANGLE)
      afficherTriangle(tableau);
    else
      afficherCercleLosange(tableau);
       
    if(mode == 1)
      d = verif();

    if(mode == 2){
      if(pla == 1){
        formeTriangle formeT;
        d = verifDeux(formeT.nbForme);
      }
      if(pla == 2){
        formeLosange formeL;
        d = verifDeux(formeL.nbForme);
      }
      if(pla == 3){
        formeCercle formeC;
        d = verifDeux(formeC.nbForme);
      }
    }

   

    while(1){
      while(1){
        cout << "Placer x : ";
        cin >> aa;
        if(ft_is_letter(aa)){
          aa = tolower(aa);
          if(existeMin(aa))
            break;
        } else { 
          cout << endl << "Impossible !" << endl;
        }
      }
      while(1){
        cout << "Placer y : ";     
        cin >> bb;
        if(ft_is_letter(bb)){
          bb = toupper(bb);
          if(type == TRIANGLE){
            if(appartientOrdonneTriangle(bb))
              break;
            else 
              cout << endl << "Cette ligne n'existe pas!" << endl;
          } else {
            if(existeMaj(bb))
              break; 
            else
              cout << endl << "Impossible !" << endl;
          }
        }
      }
      a = convertirPositionMinisculeAbscisse(aa);
      b = convertirPositionMajusculeOrdonne(bb);
      break;
  }

  if(mode == 1)
  {
    switch(d) {
      case 1:
       if(possiblePlacer(tableau,formeAleatoire1,b,a)){
           cout << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
           placerForme(tableau,formeAleatoire1,b,a);
        } else {
           vie--;
           score = score - malus;                
        }
        break;
      case 2:
        if(possiblePlacer(tableau,formeAleatoire2,b,a)){
           cout << endl << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;                 
           placerForme(tableau,formeAleatoire2,b,a);
        }  else {
           vie--;
           score = score - malus;
       	}
        break;
      case 3:
        if(possiblePlacer(tableau,formeAleatoire3,b,a)){
          cout << endl << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
          placerForme(tableau,formeAleatoire3,b,a);
        } else {
          vie --;
          score = score - malus;
        }
        break;
  }
  }

   if(mode == 2) {
   	formeTriangle formeT;
   	formeLosange formeL;
   	formeCercle formeC;
   	if(pla == 1) {
	    switch(d) {
	    	case 1 ... 20:
	        	if(possiblePlacer(tableau, forme.getVec(d),b,a)){
	            	cout << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
	            	placerForme(tableau, forme.getVec(d),b,a);
	        	} else {
	            	vie--;
	            	score = score - malus;                  
	        	}
	        	break;
	      	case 21 ... 31:
	            if(possiblePlacer(tableau, formeT.getVec(d),b,a)){
	            	cout << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
	              	placerForme(tableau, formeT.getVec(d),b,a);
	          	} else {
	            	vie--;
	              	score = score - malus;
	          	}
	        break;
		}
	}
	if(pla == 2) {
	    switch(d) {
	    	case 1 ... 20:
	        	if(possiblePlacer(tableau, forme.getVec(d),b,a)){
	            	cout << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
	            	placerForme(tableau, forme.getVec(d),b,a);
	        	} else {
	            	vie--;
	            	score = score - malus;               
	        	}
	        	break;
	      	case 21 ... 34:
	    
	            if(possiblePlacer(tableau, formeL.getVec(d),b,a)){
	            	cout << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
	              	placerForme(tableau, formeL.getVec(d),b,a);
	          	} else {
	            	vie--;
	              	score = score - malus;               
	          	}
	        break;
		}
	}
	if(pla == 3) {
	    switch(d) {
	    	case 1 ... 20:
	        	if(possiblePlacer(tableau, forme.getVec(d),b,a)){
	            	cout << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
	            	placerForme(tableau, forme.getVec(d),b,a);
	        	} else {
	            	vie--;
	            	score = score - malus;            
	        	}
	        	break;
	      	case 21 ... 32:
	    
	            if(possiblePlacer(tableau, formeC.getVec(d),b,a)){
	            	cout << "On peut placer la forme aux cordonnées " << aa << " et " << bb << endl;
	              	placerForme(tableau, formeC.getVec(d),b,a);
	          	} else {
	            	vie--;
	              	score = score - malus;
	                  
	          	}
	        break;
		}
	}

  }

  if(vie == 0){
    defaite(score);
    merci();
    exit(0);
  }

  for(int i=0;i<type;i++){
          if(ligneHorizontaleRemplit(i,tableau)){
            
            mult = supprimerLigneHorizontale(i,tableau);
            score = score + (bonus * mult);
            mult = 0; 
            descendre(tableau,type,i);
          }
        }
        for(int j=0;j<A;j++){
          if(ligneVerticaleRemplit(j,type,tableau)){ 
            mult = supprimerLigneVerticale(j,type,tableau); 
            score = score + (bonus * mult);
            mult = 0;   
          }
        
       }
  }        
}
