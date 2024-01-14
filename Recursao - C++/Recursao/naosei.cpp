#include <iostream>
using namespace std;



int somatorio (int vet[], int tam){
    if(tam !=0){
        return vet[tam]+ somatorio(vet, tam-1);
    }
    else{
        return vet[tam];
    }
}
int main () {

int tam;

cout << "Digite o tamanho do vetor: ";
cin>> tam;

int vetor[tam];
cout<< "Digite os elementos do vetor: ";
    for (int i = 0; i<tam; i++){
        cin>> vetor[i];
    }

cout<< somatorio(vetor, tam);
	return 0;

}
