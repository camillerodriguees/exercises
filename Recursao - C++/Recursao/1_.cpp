#include <iostream>
using namespace std;



int mdc (int a, int b){

    if (b>a){

        return mdc(a, b-a);
    }
    else if (a>b){
        return mdc(a-b, b);
    }
    else{
        return b;
    }

}

int main () {

int num1, num2;

cout<< "Digite o primeiro numero: ";
cin>> num1;
cout<< "Digte o segundo numero: ";
cin>> num2;

cout<< "O mdc desses dois numeros e igual a :"<< mdc(num1, num2);
	return 0;

}
