#include <iostream>
using namespace std;


int mdc(int a, int b){
    if (a%b==0){
        return b;
    }
    else{
        return mdc(b, a%b);
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
