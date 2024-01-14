#include <iostream>
using namespace std;


int main () {

int vet[6];

cout<< "Digite os valores do arranjo: ";
for (int i=0; i<5; i++){
    cin >> vet[i];
}
cin>> vet[5];

int ver=0;

for (int i=0; i<5; i++){
    if (vet[i]==vet[5]){
        int posicao = i;
        cout<<"O numero "<<vet[5]<<" possui um valor semelhante ao numero da posicao "<<posicao+1<<endl;
        ver++;
    }
}

if (ver==0){

    cout<<"O valor chave nao foi encontrado";

}

	return 0;

}
