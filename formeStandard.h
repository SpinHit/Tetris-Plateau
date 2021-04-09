#include<iostream>
#include<vector>
using namespace std;

struct formeStandard{
    public:
        int nbForme = 20;
        vector<vector<int> > forme1 { 
            {1,0},
            {1,1}
        };
        vector<vector<int> > forme2 { 
            {1,1},
            {0,1}
        };
        vector<vector<int> > forme3 { 
            {0,1},
            {1,1}
        };
        vector<vector<int> > forme4 { 
            {1,1},
            {1,0}
        };

        vector<vector<int> > forme5 { 
            {1,1},
            {1,1}
        };

        vector<vector<int> > forme6 { 
            {1,0,0},
            {1,1,1}
        };

        vector<vector<int> > forme7 { 
            {0,0,1},
            {1,1,1}
        };

        vector<vector<int> > forme8 { 
            {1,1,1},
            {0,1,0}
        };

        vector<vector<int> > forme9 { 
            {0,1,0},
            {1,1,1}
        };

        vector<vector<int> > forme10 { 
            {1,1,0},
            {0,1,1}
        };

        vector<vector<int> > forme11 { 
            {0,1,1},
            {1,1,0}
        };

        vector<vector<int> > forme12 { 
            {1,1},
            {0,1},
            {0,1}
        };

        vector<vector<int> > forme13 { 
            {1,0},
            {1,0},
            {1,1}
        };

        vector<vector<int> > forme14 { 
            {1,0},
            {1,1},
            {1,0}
        };

        vector<vector<int> > forme15 { 
            {0,1},
            {1,1},
            {0,1}
        };

        vector<vector<int> > forme16 { 
            {0,1},
            {1,1},
            {1,0}
        };

        vector<vector<int> > forme17 { 
            {1,0},
            {1,1},
            {0,1}
        };

        vector<vector<int> > forme18 {
            {1,1,1,1}
        };

        vector<vector<int> > forme19 {
            {1},
            {1},
            {1},
            {1}
        };

        vector<vector<int> > forme20 {
            {1}
        };
        
        int getTaille(){
            return nbForme;
        }

    
        vector<vector<int> > getVec(int n){
            switch(n){
                case 1: return forme1;break;
                case 2: return forme2;break;
                case 3: return forme3;break;
                case 4: return forme4;break;
                case 5: return forme5;break;
                case 6: return forme6;break;
                case 7: return forme7;break;
                case 8: return forme8;break;
                case 9: return forme9;break;
                case 10: return forme10;break;
                case 11: return forme11;break;
                case 12: return forme12;break;
                case 13: return forme13;break;
                case 14: return forme14;break;
                case 15: return forme15;break;
                case 16: return forme16;break;
                case 17: return forme17;break;
                case 18: return forme18;break;
                case 19: return forme19;break;
                case 20: return forme20;break;
            }
        }
};