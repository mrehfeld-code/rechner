#include <iostream>
using namespace std;



void clear() {
    cout << "\033c";
}


void title(int mode) {
    switch(mode) {
        case 0: 
            cout << "\033[1;36;41m======\033[30m Hauptmenü \033[36m======\033[0m\n";
            break;
            
        case 1: 
            cout << "\033[1;36;41m======\033[30m Addition \033[36m======\033[0m\n";
            break;
            
        case 2: 
            cout << "\033[1;36;41m======\033[30m Subtraktion \033[36m======\033[0m\n";
            break;
            
        case 3: 
            cout << "\033[1;36;41m======\033[30m Multiplikation \033[36m======\033[0m\n";
            break;
            
        case 4: 
            cout << "\033[1;36;41m======\033[30m Division \033[36m======\033[0m\n";
            break;
            
        case 5: 
            cout << "\033[1;36;41m======\033[30m Quadratzahlen \033[36m======\033[0m\n";
            break;
            
        case 6: 
            cout << "\033[1;36;41m======\033[30m Kubigzahlen \033[36m======\033[0m\n";
            break;
    }
}








void add() { //   Addition
    int s1, s2, e;
    clear();
    
    title(1);
    cout << "\n\n \n\n";
    
    cout << "\033[33m1. Summand\033[0m:  ";
    cin >> s1;
    cout << "\033[33m2. Summand\033[0m:  ";
    cin >> s2;
    
    e = s1 + s2;
    cout << "\n\n"
         << "Das Ergebnis lautet: \033[35m" << e << "\033[0m.\n"
         << "\n\n \n\n"
         << "Drücke [\033[36mENTER\033[0m] um fortzufahren.\n";
    getchar();
    getchar();
    clear();
}


void sub() { //   Subtraktion
    int m, s, e;
    clear();
    
    title(2);
    cout << "\n\n \n\n";
    
    cout << "\033[33mMinuend\033[0m:     ";
    cin >> m;
    cout << "\033[33mSubtrahend\033[0m:  ";
    cin >> s;
    
    e = m - s;
    cout << "\n\n"
         << "Das Ergebnis lautet: \033[35m" << e << "\033[0m.\n"
         << "\n\n \n\n"
         << "Drücke [\033[36mENTER\033[0m] um fortzufahren.\n";
    getchar();
    getchar();
    clear();
}


void mul() { //   Multiplikation
    int f1, f2, e;
    clear();
    
    title(3);
    cout << "\n\n \n\n";
    
    cout << "\033[33m1. Faktor\033[0m:  ";
    cin >> f1;
    cout << "\033[33m2. Faktor\033[0m:  ";
    cin >> f2;
    
    e = f1 * f2;
    cout << "\n\n"
         << "Das Ergebnis lautet: \033[35m" << e << "\033[0m.\n"
         << "\n\n \n\n"
         << "Drücke [\033[36mENTER\033[0m] um fortzufahren.\n";
    getchar();
    getchar();
    clear();
}


void div() { //   Division
    int d1, d2, e1, e2;
    clear();
    
    title(4);
    cout << "\n\n \n\n";
    
    cout << "\033[33mDividend\033[0m:  ";
    cin >> d1;
    cout << "\033[33mDivisor\033[0m:   ";
    cin >> d2;
    
    e1 = d1 / d2;
    e2 = d1 % d2;
    cout << "\n\n"
         << "Das Ergebnis lautet: \033[35m" << e1 << "\033[0m, Rest: \033[35m" << e2 << "\033[0m.\n"
         << "\n\n \n\n"
         << "Drücke [\033[36mENTER\033[0m] um fortzufahren.\n";
    getchar();
    getchar();
    clear();
}


void qzl() { //   Quadratzahlen
    int b, e;
    clear();
    
    title(5);
    cout << "\n\n \n\n";
    
    cout << "\033[33mBasis\033[0m:  ";
    cin >> b;
    
    e = b * b;
    cout << "\n\n"
         << "Das Ergebnis lautet: \033[35m" << e << "\033[0m.\n"
         << "\n\n \n\n"
         << "Drücke [\033[36mENTER\033[0m] um fortzufahren.\n";
    getchar();
    getchar();
    clear();
}


void kzl() { //   Kubigzahlen
    int b, e;
    clear();
    
    title(6);
    cout << "\n\n \n\n";
    
    cout << "\033[33mBasis\033[0m:  ";
    cin >> b;
    
    e = b * b;
    e = e * b;
    cout << "\n\n"
         << "Das Ergebnis lautet: \033[35m" << e << "\033[0m.\n"
         << "\n\n \n\n"
         << "Drücke [\033[36mENTER\033[0m] um fortzufahren.\n";
    getchar();
    getchar();
    clear();
}
