#include <iostream>

using namespace std;

int mult (int vetor[5], int num, int i){

    int soma = 0;

    if(i<5){

        soma = vetor[i]*num+soma;

        return soma + mult(vetor, num, i+1);

    }
    else{

      return soma;
    }
}

int main () {

    int vetor[5], num;

    for (int j = 0; j<5;j++){

        cin>>vetor[j];

    }

    cout<<"Digite um numero: ";
    cin>>num;

    int i = 0;
    cout<<mult(vetor,num, i);



	return 0;

}
