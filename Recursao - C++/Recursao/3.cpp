#include <iostream>
using namespace std;

int esoolha (int vetor[5], int num, int i){

    int cont = 0;

    if (i<5){

       if (vetor[i]==num){
        cont++;
       }

       return cont + esoolha(vetor,num,i+1);
    }

    return cont;

}

int main () {

int vetor[5], num;

    for (int j = 0; j<5;j++){

        cin>>vetor[j];

    }

    cout<<"Digite um numero: ";
    cin>>num;
    int i=0;
    cout<<"O numero aparece "<<esoolha(vetor,num,i)<<" vezes";


	return 0;

}
