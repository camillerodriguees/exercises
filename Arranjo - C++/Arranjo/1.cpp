#include <iostream>
using namespace std;

int main () {

int num, soma;
soma = 0;

cout<< "Digite quantos numeros tem o vetor: ";
cin>> num;
int vetor[num];

for (int i=0; i<num; i++){
    cout<< "Digite os numeros do vetor: ";
    cin>> vetor[i];
}
for (int i=0; i<num; i++){
    soma = soma + vetor[i];
}

cout<< "A soma de todos os elementos do vetor é: "<< soma;

	return 0;

}
