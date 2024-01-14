#include <iostream>
using namespace std;



int digitos( int numero, int digito, int& cont){
    if(digito==numero%10)
    {
        cont++;
    }
    if (numero> 0){
        return digitos(numero/10, digito, cont);
    }
}

int main () {

int num, digito, cont=0;

cout<< "Digite o numero: ";
cin>> num;
cout<< "Digite o digito: ";
cin>> digito;

digitos(num, digito, cont);

cout<<" "<<cont;
	return 0;

}
