#include <iostream>
using namespace std;

void cont (int m){
    if ((m>=1) && (m<=1000000000)){
        cout << "Voce digitou "<< m;;
    }
        else{
            cout << "valor invalido";
        }

}

int main () {

int num;
cout << "Digite um numero: ";
cin>> num;
cont(num);

	return 0;

}
