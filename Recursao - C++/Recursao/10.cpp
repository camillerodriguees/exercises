#include <iostream>
using namespace std;



int somatorio(int vet[5], int posicao){
    if(posicao!=0){
        return vet[posicao] + somatorio(vet, posicao-1);
    }
    else{
        return vet[posicao];
    }
}

int main () {

int vetor[5], tamanho = 4, i=0, soma=0;

for(int i=0; i<5; i++){
    cin>> vetor[i];
}

cout<< "a soma e: "<< somatorio(vetor, tamanho);
	return 0;

}
