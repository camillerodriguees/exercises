#include <iostream>
using namespace std;


int main () {

int num;

cout<< "Digite quantos numeros tem o vetor: ";
cin>> num;
int vetor[num];

for (int i=0; i<num; i++){
    cout<< "Digite os numeros do vetor: ";
    cin>> vetor[i];
}

for (int i=0; i<num; i++){
    if (vetor[i]%2==0){
        vetor[i] = 1;
    }
    else{
        vetor [i] = -1;
    }
}

cout<< "Os valores alterados sao: "<< endl;
for (int i=0; i<num; i++){
        cout<<vetor[i]<< endl;

}
	return 0;

}
