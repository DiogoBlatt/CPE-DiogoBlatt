#include<iostream>
#include<string>

using namespace std;

int main(){
	string palavra;
	cout << "Digite uma palavra com 5 caracteres: ";
	cin >> palavra;
	
	if (palavra.length() != 5) {
		cout << "A palavra deve ter 5 caracteres!" << endl;
		return 1;
	}
	
	int vogais[5] = {0}; 
	
	for(char& c : palavra) {
		switch (c){
			case 'a':
				vogais[0]++;
				break;
			case 'e':
				vogais[1]++;
				break;
			case 'i':
				vogais[2]++;
				break;
			case 'o':
				vogais[3]++;
				break;
			case 'u':
				vogais[4]++;
				break;
		}
	}
	
	
	cout << "A quantidade de vezes que apareceu cada vogal e:" << endl;
	cout << "a: " << vogais[0] << endl;
	cout << "e: " << vogais[1] << endl;
    cout << "i: " << vogais[2] << endl;
    cout << "o: " << vogais[3] << endl;
    cout << "u: " << vogais[4] << endl;
    
    
    for (char& c : palavra) {
    	switch (c) {
    		case 'a':
    			c = 'i';
    			break;
    		case 'e':
    			c = 'o';
    			break;
    		case 'i':
    			c = 'u';
    			break;
		}
	}
	
	cout << "texto criptografado: " << palavra << endl;
	
	return 0;
}
