#include<iostream>
using namespace std;

bool primo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) 
            return false;
    }
    return true; 
}

int main() {
    int num;
    cout << "Insira um numero inteiro maior que 1: " << endl;
    cin >> num;

    if (primo(num))
        cout << num << " E um numero primo." << endl;
    else
        cout << num << " Nao e um numero primo." << endl;

    return 0;
}
