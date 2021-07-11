#include <iostream>
#include "necessaries.h"
using namespace std;


int main() {
    int strg, schleife = 1;
    clear();
    
    while(schleife == 1) {
        title(0);
        cout << "\n\n \n\n";
        
        cout << "Wähle einen \033[34mModus\033[0m:\n \n\n"
             << "[\033[34m1\033[0m]: \033[32mAddition\033[0m \n"
             << "[\033[34m2\033[0m]: \033[32mSubtraktion\033[0m \n"
             << "[\033[34m3\033[0m]: \033[32mMultiplikation\033[0m \n"
             << "[\033[34m4\033[0m]: \033[32mDivision\033[0m \n"
             << "[\033[34m5\033[0m]: \033[32mQuadratzahlen\033[0m \n"
             << "[\033[34m6\033[0m]: \033[32mKubigzahlen\033[0m \n"
             << "[\033[34m7\033[0m]: \033[32mProgramm beenden\033[0m \n"
             << "\nGib deine \033[34mSteuerzahl\033[0m ein.\n->  ";
        cin >> strg;
        
        while((strg < 1) || (strg > 7)) {
            cout << "->  ";
            cin >> strg;
        }
        
        switch(strg) {
            case 1:
                add();
                break;
            
            case 2:
                sub();
                break;
                
            case 3:
                mul();
                break;
                
            case 4:
                div();
                break;
                
            case 5:
                qzl();
                break;
                
            case 6:
                kzl();
                break;
                
            case 7:
                schleife = 0;
                break;
        }
    }
    
    clear();
    return 0;
}