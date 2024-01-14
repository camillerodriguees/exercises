#include <iostream>
using namespace std;

int maximo (int vet[5], int &maior, int i){
    if(i<=5){
    if(maior<vet[i]){
       maior = vet[i];
    }
    maximo(vet, maior, i+1);
    }

}

bool confere( int vet[5], int digito, int posicao, int &x){
    if(posicao<=4){
    if(vet[posicao]==digito){
        x = posicao;
        return true;
    }
    confere(vet, digito, posicao+1, x);
    }
    else{
        return false;
    }
}


int main () {

int vetor[5],digito, i=1, posicao=0, x=0;

cout<<"Digite os valores do vetor :";
for (int i =0;i<5; i++){
    cin>>vetor[i];
}
cout<< "Digite o digito: ";
cin>>digito;

for (int i =0;i<5; i++){
    cout<<vetor[i]<<" ";
}

cout<< endl;

int maior;
maior = vetor[0];

maximo(vetor, maior, i);
cout<< "O maior valor do vetor e: "<<maior<<endl;


bool ver = confere(vetor, digito, posicao, x);

if(ver==true){
    cout<<"A posicao do digito e: "<<x+1;
}
else{
    cout<<"O digito nao foi achado no numero";
}
	return 0;
}
