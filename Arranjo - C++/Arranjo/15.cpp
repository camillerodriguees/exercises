#include <iostream>
using namespace std;



int main () {

int vet[5], menor, posicao;

cout<< "Digite os valores do arranjo A: ";
for (int i=0; i<5; i++){
    cin >> vet[i];
}

menor = vet[0];
for (int i=0; i<5; i++){
    if (vet[i]< menor){
        menor = vet[i];
        posicao = i;
    }
}

cout << "O menor valor e: "<< menor<< "que esta na posicao: "<< posicao+1;
	return 0;

}
