#include <iostream>
using namespace std;

int perfect (int num){
    int soma = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            soma += i;
            if (i * i != num) {
                soma += num / i;
            }
        }
    }
    return soma == num;
}

int main () {
    cout << "Todos os numeros perfeitos entre 1 e 1000:\n\n";

    for (int i = 2; i <= 1000; i++) {
        if (perfect(i)) {
            cout << i << " E um numero perfeito." << endl;
            cout << "Fatores dele: ";
            for (int k = 1; k <= i/2; k++) {
                if (i % k == 0) {
                    cout << " " << k;
                }
            }
            cout << "\n \n";
        }
    }
    return 0;
}
