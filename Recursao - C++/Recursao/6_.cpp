#include <iostream>
#include <cmath>
using namespace std;

int progressao(int x, int n, int cont){
    int prog = 0;
    if (cont!=n){
        prog = pow(x, cont);
        return prog + progressao(x, n,cont+1);
    }
    else{
       return pow(x, cont);
    }
}

int main () {

int num1, num2;

cout<< "Digite o primeiro numero: ";
cin>> num1;
cout<< "Digite o segundo numero: ";
cin>> num2;

int cont = 0;
cout<< progressao(num1, num2,cont);
	return 0;

}
