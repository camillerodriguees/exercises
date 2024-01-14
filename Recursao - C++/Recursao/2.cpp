#include <iostream>
using namespace std;

int inverte (int vetor[5], int pfinal, int pstart){

    int save;

    if (pfinal>pstart){

        save=vetor[pstart];
        vetor[pstart] = vetor[pfinal];
        vetor[pfinal] = save;
        inverte (vetor,pfinal-1,pstart+1);
    }


}

int main () {

int vetor [6], tamanho=5, pstart=0;

for (int i=0; i<6; i++){
    cin>> vetor[i];
}

for (int i=0; i<6; i++){
    cout<< vetor[i];
}
inverte(vetor,tamanho,pstart);

cout<<endl;
cout<<endl;

for (int i=0; i<6; i++){
    cout<< vetor[i];
}

	return 0;

}
