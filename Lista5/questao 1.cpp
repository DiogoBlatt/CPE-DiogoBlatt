#include<iostream>
using namespace std;

float fahrenheit(int n){  
        return (9.0/5.0) * n + 32.0;
    }

int main(){

    cout << " Esta e a tabela com as conversoes de celcius para fahreinheit de 0C ate 100C" << endl;

    for (int cel = 0; cel <=100; cel++){
        cout << cel << "C = " << fahrenheit(cel) << "F." << endl;
    }
    return 0;
}
