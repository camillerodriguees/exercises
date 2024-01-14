#include <iostream>
using namespace std;


int converte(int binario){

    if(binario/2!=0){
        converte(binario/2);
    }
    cout<<binario%2;

}

int main () {

int decimal;
cout<< "Digite o numero em decimal: ";
cin>> decimal;

converte(decimal);
	return 0;

}
