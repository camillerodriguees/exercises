#include <iostream>
using namespace std;


int soma (int vet[5], int posicao){

    if (posicao==0){

        return vet[0];

    }

    else {

        return vet[posicao]+soma(vet,posicao-1);

    }


}

int main () {

int vetor [5], tamanho=4;

for (int i=0; i<5; i++){
    cin>> vetor[i];
}

cout<<"A soma do vetor e: "<<soma(vetor,tamanho);

	return 0;

}
