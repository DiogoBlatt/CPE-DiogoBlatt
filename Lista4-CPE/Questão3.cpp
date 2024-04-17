#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int l1, l2, hipo;
    cout << endl << "Os triplos de pitagoras!" << endl;

    for (l1 = 1; l1 <= 20; l1++) {
          for (l2 = l1; l2 <= 20; l2++) { 
            for (hipo = l2 + 1; hipo <= 20; hipo++) { 
                if ((l1 * l1 + l2 * l2 == hipo * hipo) && hipo <= 20){
                    cout << "\nlado 1: " << l1 << "\nlado 2: " << l2 << "\nhipotenusa: " << hipo << endl;
                }
            }
        }
    }
    return 0;
}
