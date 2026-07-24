#include <iostream>
#include <limits>

// Declararea funcțiilor (+ - * /)
int adunare(int num1, int num2);
int scădere(int num1, int num2);
int înmulțire(int num1, int num2);
double împărțire(double num1, double num2);

int main (){
    // Selectarea operației matematice
    char op;
    int a = 0;
    int b = 0;
    
    do {
    std::cout << "Alegeți operația matematică dorită (+ - * /): \n";
    std::cin >> op;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
    while(op != '+' && 
          op != '-' &&
          op != '*' &&
          op != '/');

    // Introducerea numerelor
    std::cout << "Introduceți primul număr: ";
    std::cin >> a;
    std::cout << "Introduceți al doilea număr: ";
    std::cin >> b;
    // Apelul funcțiilor
    switch(op){
        case '+': 
        std::cout << adunare(a, b);
        break;
        case '-': 
        std::cout << scădere(a, b);
        break;
        case '*': 
        std::cout << înmulțire(a, b);
        break;
        case '/': 
        if(b == 0){
            std::cout << "Nu se poate împărți la 0!\n";
            while(b==0){
                std::cout << "Alegeți altă valoare al lui b: ";
                std::cin >> b;
            }
        }
        std::cout << împărțire(a, b);
        break;
    }

    return 0;
}

// Definirea funcțiilor (+ - * /)
int adunare(int num1, int num2){
    int rezultat = num1 + num2;
    return rezultat;
}
int scădere(int num1, int num2){
    int rezultat = num1 - num2;
    return rezultat;
}
int înmulțire(int num1, int num2){
    int rezultat = num1 * num2;
    return rezultat;
}
double împărțire(double num1, double num2){
    double rezultat = num1 / num2;
    return rezultat;
}