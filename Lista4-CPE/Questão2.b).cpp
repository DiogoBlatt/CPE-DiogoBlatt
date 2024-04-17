#include<iostream>
using namespace std;

int fatorial (int n){
    return (n == 1 || n == 0) ? 1 : n * fatorial(n-1);
}

int main(){
    int num;
    float e = 0.0;

    cout << "Digite um numero positivo: " << endl;
    cin >> num;

   
    if (num < 0){
        cout << "Seu numero precisa ser positivo!" << endl;
        return main();
    }

    for (int i = 0; i < num; i++){
        e += 1.0/fatorial(i);
    }
    cout << "Seu numero de euler " << e << " com " << num << " termos.";
    return 0;
}
