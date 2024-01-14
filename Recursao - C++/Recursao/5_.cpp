#include <iostream>
using namespace std;


int mult (int x, int y){

    int cont = 1,soma=0;
    if(cont!=y){
        cont++;
        soma = x+soma;
        return soma + mult(x, y-1);
    }
    else{
        return ;
    }
}
int main () {

int num1, num2, soma;

cout<< "Digite o primeiro numero: ";
cin>> num1;
cout<< "Digite o segundo numero: ";
cin>> num2;

cout<<mult(num1, num2);
	return 0;

}
