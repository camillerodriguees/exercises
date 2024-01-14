#include <iostream>
using namespace std;

int regressivo (int vetor[6],int tam){
    if(tam>=0){
        cout<< vetor[tam];
        regressivo (vetor, tam-1);
    }
}
int main () {


int vetor[6], tam=5, i=0;


for (int i =0; i<6; i++){
    cin>> vetor[i];
}


regressivo (vetor, tam);



	return 0;


}
