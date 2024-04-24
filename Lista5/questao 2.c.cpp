#include<iostream>
#include<cmath>
using namespace std;

int primoa(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) 
            return false;
    }
    return true; 
}

int primob(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i  <= sqrt(num); i++) { 
        if (num % i == 0) 
            return false;
    }
    return true; 
}

int main() {
    int num;
    cout << "Insira um numero inteiro maior que 1: " << endl;
    cin >> num;

    if (primoa(num)){
        cout << num << " E um numero primo, usando n/2." << endl;
    } else {
        cout << num << " Nao e um numero primo, usando n/2." << endl;
    }

    if(primob(num)) {
        cout << num << " E um numero primo, usando a raiz de n." << endl;
    } else {
        cout << num << " Nao e um numero primo, usando a raiz de n." << endl;
    }
        
    return 0;
}
