#include<iostream>
#include<vector>
using namespace std;

struct formeCercle{
    public:
        int nbForme = 32;
        vector<vector<int> > forme21 {
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
        };
        vector<vector<int> > forme22 {
            {0,1,1,0},
            {1,1,1,1},
            {1,1,1,1},
            {0,1,1,0}
        };
        vector<vector<int> > forme23 {
            {1,0,0,1},
            {1,0,0,1},
            {1,0,0,1},
            {1,1,1,1}
        };
        vector<vector<int> > forme24 {
            {1,1,1,1},
            {0,0,0,1},
            {0,0,0,1},
            {0,0,0,1}
        };

        vector<vector<int> > forme25 {
            {1,1,1,1},
            {1,1,1,0}
        };

        vector<vector<int> > forme26 {
            {1,1,1,1},
            {0,0,0,1},
            {0,0,0,1},
            {1,1,1,1}
        };

        vector<vector<int> > forme27 {
            {1,1},
            {1,1},
            {1,1},
            {1,1}
        };

        vector<vector<int> > forme28 {
            {1,1,1,1},
            {1,1,1,1}
        };

        vector<vector<int> > forme29 {
            {1},
            {1},
            {1},
            {1},
            {1}    
        };

        vector<vector<int> > forme30 {
            {1,1,1,1,1},
            {1,0,0,0,1}
        };

        vector<vector<int> > forme31 {
            {1,1,1,1,1}
        };

        vector<vector<int> > forme32 {
            {1,0,0,0},
            {1,0,0,0},
            {1,0,0,1},
            {1,1,1,1}
        };
        
        int getTaille(){
            return nbForme;
        }

    
        vector<vector<int> > getVec(int n){
            switch(n){
                case 21: return forme21;break;
                case 22: return forme22;break;
                case 23: return forme23;break;
                case 24: return forme24;break;
                case 25: return forme25;break;
                case 26: return forme26;break;
                case 27: return forme27;break;
                case 28: return forme28;break;
                case 29: return forme29;break;
                case 30: return forme30;break;
                case 31: return forme31;break;
                case 32: return forme32;break;
            }
        }
};