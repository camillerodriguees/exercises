#include <iostream>
using namespace std;



int inverte(int vet[6], int tam, int i){
    if (tam > i){
        int prim = vet[i];
        int fim = vet[tam];
        vet[i]= fim;
        vet[tam]=prim;
        inverte(vet, tam-1, i+1);
    }

}

int main () {

int vetor[6], tam=5, i=0;

for (int i =0; i<6; i++){
    cin>> vetor[i];
}

inverte(vetor, tam, i);

for (int i=0; i<6; i++){
    cout<< vetor[i];
}
	return 0;

}
