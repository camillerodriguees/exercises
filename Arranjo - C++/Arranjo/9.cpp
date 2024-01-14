#include <iostream>
using namespace std;

int main () {

int vetor [5], ver;

cout<< "Digite os valores do arranjo: ";
for (int i=0; i<5; i++){
    cin >> vetor[i];
}

for (int i=0; i<5; i++){
    if(vetor[i]%2!=0){
        ver++;
    }

}

if (ver>0){

    cout<<"FALSO";

}

if (ver==0){

    cout<<"VERDADEIRO";

}

	return 0;

}
