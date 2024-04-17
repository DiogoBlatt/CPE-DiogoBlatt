#include<iostream>
using namespace std;

int main (){    
    int menornum = 1, maiornum = 100, chute;
    char resp;
    cout << "Digite um numero de 1 a 100 e vou advinhar. \nSe o numero for maior responda com '>', se for menor responda com '<' e se for o seu numero digite '='" << endl;
    
    while (true){
        chute = menornum + (maiornum - menornum) / 2;
        cout << "O seu numero e: " << chute << "?\n";
        cin >> resp;

        if (resp == '='){
            cout << "Advinhei" << endl;
            }else if (resp == '<'){
                maiornum = chute - 1;
            } else if (resp == '>'){
                menornum = chute + 1;
            }
        if (menornum > maiornum){
            cout << "Seu numero nao esta dentro do intervalo";
        }
    }

    return 0;
}
