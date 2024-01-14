#include <iostream>
#include <cmath>
using namespace std;



bool encaixa (int x, int y){
int contador=0;
int tam = y;
    while (tam != 0){
        tam = tam/10;
        contador++;
    }

    int cont = pow(10, contador);
    int result = x%cont;
    if (result==y){
        return true;
    }
        else
            return false;
}
void encaixa2 (int x, int y){
    while(x != 0){
        if (encaixa(x,y)== true){
            cout << "O valor corresponde"<<endl;
            return;
        }
            else{
                x = x/10;
            }

    }
cout << "Valor nao corresponde";
}

int main () {

int num1, num2;
cout << "Digite o primeiro numero: "<< endl;
cin>> num1;
cout << "Digite o segundo numero: "<< endl;
cin>> num2;
encaixa(num1, num2);
encaixa2(num1, num2);
	return 0;

}
