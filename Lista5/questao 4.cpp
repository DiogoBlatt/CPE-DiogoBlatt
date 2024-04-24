#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void pergunta () {
    int num1 = rand() % 9 + 1;
    int num2 = rand() % 9 + 1;
    int resp;

    cout << "Quanto e " << num1 << " vezes " << num2 << "?" << endl;
    cin >> resp;

    while ( resp != num1 * num2){
        cout << "Incorreto, tente de novo" << endl;
        cin >> resp;
    }

    cout << "Isso!" << endl;

}

int main () {
    srand(time(0));

    cout << "Quer multiplicar? digite 's' para continuar e 'n' para finalizar o programa" << endl;
    cout << "Apos digitar sua resposta de 'enter' de novo " << endl;
   
    char continuar;

    do {
        pergunta();

        cin.ignore();
        continuar = cin.get();

        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;
    } while (continuar == 's');

    cout << "Pronto, adeus!" << endl;

    return 0;
}
