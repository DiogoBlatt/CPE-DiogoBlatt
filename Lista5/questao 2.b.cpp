#include<iostream>
using namespace std;

int primo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) // 
            return false;
    }
    return true;
}

int main() {
    cout << "Estes são todos os numeros primos entre 2 e 1000: " << endl;

    for(int num = 2; num <=1000; num++){
        if (primo(num))
            cout << num << " E um numero primo." << endl; 
    }
    
    return 0;
}
